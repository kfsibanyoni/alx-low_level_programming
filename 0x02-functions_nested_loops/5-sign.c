#include <stdio.h>
#include "main.h"

/**
 * print_sign - print (+): n > 0; (0): n = 0; (-): n < 0
 * @n: input value
 * return: 1 = (+); 0 = (0); -1 = (-)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
