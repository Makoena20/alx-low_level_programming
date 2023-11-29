#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int length) {
    int i;
    for (i = 0; i < length; i++) {
        // Your code to print opcodes goes here
        printf("opcode ");
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int length = atoi(argv[1]);

    if (length < 0) {
        printf("Error\n");
        return 2;
    }

    print_opcodes(length);

    return 0;
}

