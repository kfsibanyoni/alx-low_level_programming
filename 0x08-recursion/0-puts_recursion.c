#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: pointer
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	_putchar('\n');

	_putchar(*s);
	 s++;
	_puts_recursion(s);
}
