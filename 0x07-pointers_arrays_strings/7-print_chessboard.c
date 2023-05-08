#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int row, col;

	col = 0;
	while (row < 64)
	{
		if (row % 8 == 0 && row != 0)
		{
			row = col;
			_putchar('\n');
		}

		row++;
		_putchar(a[row / 8][row - col]);
	}

	_putchar('\n');
}
