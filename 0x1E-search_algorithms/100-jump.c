#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump;
    size_t left = 0;
    size_t right = 0;
    size_t i;  /* Declare the loop variable outside the for loop */

    if (array == NULL || size == 0)
        return (-1);

    jump = (size_t)sqrt(size);

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", right, array[right]);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", left, right);

    if (right >= size)
        right = size - 1;

    for (i = left; i <= right; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }

    return (-1);
}

