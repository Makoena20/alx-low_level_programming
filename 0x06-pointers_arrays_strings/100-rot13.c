#include "main.h"

/**
 * rot13 - Encode a string using ROT13 substitution cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
    char *input = str;
    char *output = str;

    while (*input)
    {
        if ((*input >= 'A' && *input <= 'Z') || (*input >= 'a' && *input <= 'z'))
        {
            char base = (*input >= 'a') ? 'a' : 'A';
            *output = ((10 + (*input - base)) % 26) + base;
        }
        else
        {
            *output = *input;
        }

        input++;
        output++;
    }

    return str;
}

