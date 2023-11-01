#include <unistd.h>

/**
 * _putchar - Write a character to the standard output (stdout).
 * @c: The character to write.
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

