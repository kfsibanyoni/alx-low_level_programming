#include <stdio.h>
#include "main.h"

/**
 * print_sign - print (+), (0), (-) for a number
 *
 * @n: input value
 *
 * Return: +, 0, -
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
	}
	return (-1);
}
