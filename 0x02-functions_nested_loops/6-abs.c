#include "main.h"

/**
 * int _abs - find abs value of a n integer
 *
 * return: abs value
 *
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (x * -1);
	}
	_putchar('\n');
}
