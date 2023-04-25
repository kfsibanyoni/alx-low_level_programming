#include <stdio.h>
#include "main.h"

/**
 * print_sign - print (+), (0), (-) for a number
 *
 * @n: input value
 * 
 * return: 1 is positive
 *
 * 0 is zero
 *
 * -1 is negative
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
