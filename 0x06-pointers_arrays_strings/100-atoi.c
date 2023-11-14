#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /* Check for signs */
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }

    /* Convert string to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        if (result > (result * 10 + (s[i] - '0')) / 10)
        {
            /* Overflow detected, return 0 */
            return 0;
        }

        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}

