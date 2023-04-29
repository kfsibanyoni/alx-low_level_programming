#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: parameter
 * Return: 0 always
 */

void print_line(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < n; lines++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
