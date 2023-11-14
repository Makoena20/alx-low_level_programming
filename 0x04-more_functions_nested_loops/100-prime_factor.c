#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the given number
 */
long largest_prime_factor(long n)
{
    long i;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            n /= i;
            i--;
        }
    }

    return i;
}

int main(void)
{
    long number = 612852475143;
    long result = largest_prime_factor(number);

    printf("%ld\n", result);

    return 0;
}

