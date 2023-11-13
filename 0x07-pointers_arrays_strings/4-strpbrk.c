#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 *             of any of the bytes in the string accept.
 * @s: the string to be searched
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *temp_accept = accept;

        while (*temp_accept != '\0')
        {
            if (*s == *temp_accept)
                return s;

            temp_accept++;
        }

        s++;
    }

    return NULL;
}

