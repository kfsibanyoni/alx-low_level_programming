#include "main.h"

/**
 * puts2 - prints every other character of a string 
 *
 * @str: string pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int n, temp;

	n = 0;
	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			temp = str[n];
			_putchar(temp);
		}
		n++;
	}

	_putchar('\n');
}
