#include <stdio.h>

/**
 * main - Entry point, prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 1, b = 2, next;
    int count;

    printf("%lu, %lu", a, b);

    for (count = 2; count < 98; ++count)
    {
        next = a + b;
        printf(", %lu", next);
        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}

