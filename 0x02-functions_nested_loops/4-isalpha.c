#include "main.h"

/**
 * _islower - return 1 if character is lower case, else 0
 * @c: formal parameter
 * Return: 1(success); 0(false)
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 65 && c >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
