#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    /* Skip leading spaces and handle signs */
    while (s[i] == ' ' || (s[i] == '-' || s[i] == '+'))
    {
        if (s[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }

    /* Process each character to build the integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';

        /* Check for overflow before updating result */
        if (result > (INT_MAX - digit) / 10)
        {
            /* Handle overflow by returning 0 */
            return 0;
        }

        result = result * 10 + digit;
        i++;
    }

    return sign * result;
}

/**
 * main - Check the _atoi function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}

