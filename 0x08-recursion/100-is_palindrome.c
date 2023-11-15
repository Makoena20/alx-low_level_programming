#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = 0;

    while (*(s + len))
        len++;

    if (len <= 1)
        return (1);

    if (*s == *(s + len - 1))
        return (is_palindrome(s + 1) && 1);

    return (0);
}
