#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to reverse and print
 */
void print_rev(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
    }

    for (i = i - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}

