#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int first = 1, second = 2, next_term, sum = 0;

    while (second <= 4000000)
    {
        if (second % 2 == 0)
        {
            sum += second;
        }

        next_term = first + second;
        first = second;
        second = next_term;
    }

    printf("%ld\n", sum);

    return (0);
}

