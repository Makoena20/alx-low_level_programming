#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 16

/**
 * main - Displays the ELF header information of a given ELF file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[]) {
    int fd;
    unsigned char buf[BUFSIZE];
    ssize_t bytes_read;

    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    bytes_read = read(fd, buf, BUFSIZE);
    if (bytes_read != BUFSIZE || buf[0] != ELFMAG0 || buf[1] != ELFMAG1 ||
        buf[2] != ELFMAG2 || buf[3] != ELFMAG3) {
        dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
        close(fd);
        return 98;
    }

    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x", buf[0], buf[1], buf[2], buf[3]);
    printf(" %02x %02x %02x %02x\n", buf[4], buf[5], buf[6], buf[7]);

    printf("  Class:                             ");
    switch (buf[4]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", buf[4]);
    }

    printf("  Data:                              ");
    switch (buf[5]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", buf[5]);
    }

    printf("  Version:                           %d (current)\n", buf[6]);

    printf("  OS/ABI:                            ");
    switch (buf[7]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %x>\n", buf[7]);
    }

    printf("  ABI Version:                       %d\n", buf[8]);

    printf("  Type:                              ");
    switch (buf[16] + (buf[17] << 8)) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %x>\n", buf[16] + (buf[17] << 8));
    }

    printf("  Entry point address:               ");
    switch (buf[4]) {
        case ELFCLASS32:
            printf("0x%08x\n", *(Elf32_Addr *)(buf + 0x18));
            break;
        case ELFCLASS64:
            printf("0x%016lx\n", *(Elf64_Addr *)(buf + 0x18));
            break;
        default:
            printf("<unknown>\n");
    }

    close(fd);
    return 0;
}

