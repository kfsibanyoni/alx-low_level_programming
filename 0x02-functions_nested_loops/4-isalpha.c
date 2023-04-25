#include "main.h"

/**
 * _isalpha - return 1 if character is a letter, else 0
 * @c: formal parameter
 * Return: 1(success); 0(false)
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
