#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabte in lower case
 *
 * void: returns 0
 *
 */
void print_alphabet(void)
{
	char  alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
