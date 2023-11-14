#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum, i, j;

    while (n1[len1] != '\0')
        len1++;

    while (n2[len2] != '\0')
        len2++;

    if (len1 + 1 > size_r || len2 + 1 > size_r)
        return 0;

    len1--;
    len2--;
    r[size_r] = '\0';
    size_r--;

    for (i = len1, j = len2; i >= 0 || j >= 0 || carry; i--, j--)
    {
        sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';

        if (j >= 0)
            sum += n2[j] - '0';

        carry = sum / 10;
        r[size_r] = (sum % 10) + '0';
        size_r--;
    }

    if (r[size_r + 1] == '0')
        return r + size_r + 1;
    else
        return r + size_r;
}


