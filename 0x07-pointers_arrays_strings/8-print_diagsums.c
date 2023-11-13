#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i, sum_diag1 = 0, sum_diag2 = 0;

    for (i = 0; i < size; i++)
    {
        sum_diag1 += *(a + i * size + i);           /* sum of the main diagonal elements */
        sum_diag2 += *(a + i * size + (size - 1 - i)); /* sum of the other diagonal elements */
    }

    printf("%d, %d\n", sum_diag1, sum_diag2);
}


