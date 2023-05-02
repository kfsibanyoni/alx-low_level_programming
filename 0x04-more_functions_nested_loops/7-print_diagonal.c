#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: dimentions
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			int space;

			for (space = 1; space <= (size + i); space++)
			{
				_putchar(' ');
			}
			int j;
			
/*			for (j = 1; j <= i; j++)
			{
				_putchar('\');
			}*/

			_putchar('\n');
		}
	}
}
