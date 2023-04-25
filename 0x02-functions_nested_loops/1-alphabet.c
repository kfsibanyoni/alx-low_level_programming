#include <stdio.h>
#include "main.h"

/**
 * main - entry point: print char alphabet
 *
 * Return: 0 always(success)
 *
 */
int main(void)
{
	/* local variable definition */
	char  alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
