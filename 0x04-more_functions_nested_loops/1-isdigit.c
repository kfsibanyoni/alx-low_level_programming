#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: formal parameter
 * return: 1(success), 0(fail)
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
