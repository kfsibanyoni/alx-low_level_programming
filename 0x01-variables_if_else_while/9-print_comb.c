#include <stdio.h>
/**
 * Main - main code block
 *
 * Print numbers 0...9 with comma space
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(', ');
	}
	return (0);
}
