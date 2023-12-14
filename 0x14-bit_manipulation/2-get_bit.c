#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if the index is valid */
    if (index >= (sizeof(unsigned long int) * 8))
        return -1;

    /* Shift n to the right by the index, and check the least significant bit */
    return (n >> index) & 1;
}

