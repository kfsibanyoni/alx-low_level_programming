#include "main.h"

/**
 * _islower - return 1 if character is lower case, else 0
 * int c: formal parameter
 * Return: 1(success); 0(false)
 *
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
