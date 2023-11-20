#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2D array of integers, NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
