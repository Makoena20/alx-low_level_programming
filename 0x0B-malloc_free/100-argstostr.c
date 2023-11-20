#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 * Each argument is followed by a '\n' in the new string.
 */
char *argstostr(int ac, char **av)
{
    int i, j, len = 0, total_len = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate the total length of the arguments and newlines */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            len++;
        total_len += len + 1; /* Add 1 for newline character */
        len = 0;             /* Reset len for the next iteration */
    }

    /* Allocate memory for the concatenated string */
    str = malloc(sizeof(char) * total_len + 1);

    if (str == NULL)
        return (NULL);

    /* Copy each argument followed by a newline to the new string */
    for (i = 0, len = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[len] = av[i][j];
            len++;
        }
        str[len] = '\n';
        len++;
    }

    str[len] = '\0'; /* Add null terminator at the end */

    return (str);
}

