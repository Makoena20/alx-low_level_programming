#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers from 1 to 100 with Fizz, Buzz, or FizzBuzz
 * for multiples of 3, 5, or both.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("Fizz");
        }
        if (i % 5 == 0)
        {
            printf("Buzz");
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            printf("%d", i);
        }

        if (i < 100)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    return (0);
}

