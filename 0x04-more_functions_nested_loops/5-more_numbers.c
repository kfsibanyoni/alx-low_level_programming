#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 15)
	{
		_putchar('0' + i);

		if (j >= 10) 
		{
			_putchar('0' + j % 10);
			j++;
		}
		
		_putchar('\n');
		i++;
	}
}
