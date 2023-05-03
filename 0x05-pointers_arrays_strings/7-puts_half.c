#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = ((i - 1) / 2) + 1;
		for (; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		n = i / 2;
		for (; n < i; n++)
		{
			_putchar(str[n]);
		}
	}

	_putchar('\n');
}
