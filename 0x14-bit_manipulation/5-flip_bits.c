#include "main.h"

/**
 * count_set_bits - Counts the number of set bits (1s) in a number.
 * @num: The number to count set bits in.
 * Return: The number of set bits.
 */
unsigned int count_set_bits(unsigned long int num)
{
    unsigned int count = 0;

    while (num)
    {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

/**
 * flip_bits - Counts the number of bits needed to flip to transform one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    /* XOR to get the differing bits */
    unsigned long int xor_result = n ^ m;

    /* Count the set bits in the XOR result */
    return count_set_bits(xor_result);
}

