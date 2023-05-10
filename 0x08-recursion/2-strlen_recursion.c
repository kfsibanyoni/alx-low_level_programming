#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	/* s = " "*/
	if (*s == 0)
		/* stop counter*/
		return (0);
	/* strlen("k") = strlen ("") + 1 = 1 etc*/
	return (_strlen_recursion(s + 1) + 1);
}
