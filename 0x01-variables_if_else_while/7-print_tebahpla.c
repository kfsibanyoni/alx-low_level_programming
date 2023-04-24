#include <stdio.h>
/**
 * main - entry point: print char alphabet
 *
 * Return: 0 always
 *
 */
int main(void)
{
	/* local variable definition */
	char revAlpha = 'z';

	/* while loop execution */
	while (revAlpha >= 'a')
	{
		putchar(revAlpha);
		revAlpha--;
	}
	putchar('\n');
	return (0);
}
