#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
    int length = 0;
    int half, i;

    while (str[length] != '\0')
    {
        length++;
    }

    half = (length - 1) / 2;

    if (length % 2 == 0)
    {
        for (i = half; str[i] != '\0'; i++)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        for (i = half + 1; str[i] != '\0'; i++)
        {
            _putchar(str[i]);
        }
    }

    _putchar('\n');
}

