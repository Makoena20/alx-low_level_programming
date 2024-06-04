#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define EV_CURRENT 2

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 98;
    }

    Elf64_Ehdr elf_header;
    if (lseek(fd, 0, SEEK_SET) == -1) {
        perror("lseek");
        close(fd);
        return 98;
    }
    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        perror("read");
        close(fd);
        return 98;
    }

    close(fd);

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < 16; i++) {
        printf("%02x", elf_header.e_ident[i]);
        if (i < 15)
            printf(" ");
    }
    printf("\n");
    printf("  Class:                             ");
    if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");
    else if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else
        printf("Unknown\n");
    printf("  Data:                              ");
    if (elf_header.e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");
    else
        printf("Unknown\n");
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (elf_header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %x>\n", elf_header.e_ident[EI_OSABI]);
    }
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (elf_header.e_type) {
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("Unknown\n");
    }
    printf("  Entry point address:               0x%x\n", elf_header.e_entry);

    return 0;
}

