#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write a character to stdout.
 * @c: The character to write.
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

