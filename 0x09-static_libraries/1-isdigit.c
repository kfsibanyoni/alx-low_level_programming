#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: formal parameter
 * Return: 1(success), 0(fail)
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
