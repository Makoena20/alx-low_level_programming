#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
    int length = strlen(s);
    int i, j;

    for (i = 0, j = length - 1; i < length / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}
