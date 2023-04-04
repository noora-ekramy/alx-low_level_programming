#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: 2D array of chars containing the chessboard.
 *
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
int row, column;

for (row = 0; row < 8; row++)
{
for (column = 0; column < 8; column++)
{
_putchar(a[row][column]);
}
_putchar('\n');
}
}

