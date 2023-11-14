#include "main.h"

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x%02x ", (b[i + j] >> 4) & 0x0f, b[i + j] & 0x0f);
            else
                printf("     ");

            if (j % 2 != 0)
                printf(" ");
        }

        for (j = 0; j < 10 && i + j < size; j++)
        {
            if (b[i + j] >= 32 && b[i + j] <= 126)
                printf("%c", b[i + j]);
            else
                printf(".");
        }

        printf("\n");
    }
}

