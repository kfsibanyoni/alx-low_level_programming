#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: initial value
 *
 * Return: last digit of a number
 */
int print_last_digit(int i)
{
	int lastDigit = i % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
