#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int rev, n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	rev = n - 1;
	while (rev >= 0)
	{
		_putchar(s[rev]);
		rev--;
	}

	_putchar('\n');
}
