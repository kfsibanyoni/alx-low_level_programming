#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: square dimentions
 * Return: if 0 print \n
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar(' ');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
