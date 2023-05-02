#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: void
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z' && alph != 'e' && alph != 'q')
	{	
		putchar(alph);
		alph++;
	}

	putchar('\n');
	return (0);
}
