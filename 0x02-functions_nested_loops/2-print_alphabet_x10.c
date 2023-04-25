#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case x10
 *
 * void: returns 0 
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char  alphabet = 'a';
		
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
