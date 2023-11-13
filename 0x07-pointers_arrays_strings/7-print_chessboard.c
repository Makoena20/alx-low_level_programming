#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard array.
 *
 * Description: Prints the chessboard represented by a 2D array of characters.
 * Each character represents a piece on the chessboard.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            putchar(a[i][j]);
        }
        putchar('\n');
    }
}

