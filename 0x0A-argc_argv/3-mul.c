#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication.
 */
int multiply(int a, int b)
{
    return (a * b);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 if successful, 1 if the number of arguments is incorrect.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    /* Convert command line arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Perform multiplication */
    result = multiply(num1, num2);

    /* Print the result */
    printf("%d\n", result);

    return (0);
}
