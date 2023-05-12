#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 *
 * @str: string pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	char chr;

	while (*str != '\0')
	{
		chr = *str;
		_putchar(chr);
		str++;
	}

	_putchar('\n');
}
