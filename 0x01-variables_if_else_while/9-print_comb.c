#include <stdio.h>
/**
 * main - main code block
 *
 * Print numbers 0...9 with comma space
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
