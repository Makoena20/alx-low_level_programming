#include <unistd.h>

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }

    write(1, "\n", 1);
}

