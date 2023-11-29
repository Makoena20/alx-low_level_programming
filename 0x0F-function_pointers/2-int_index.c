#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function does not return 0,
 * or -1 if no element matches or if size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array && cmp)
    {
        int i;

        if (size <= 0)
            return -1;

        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return i;
        }
    }

    return -1;
}
