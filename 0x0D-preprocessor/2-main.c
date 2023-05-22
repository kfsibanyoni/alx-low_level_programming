#include <stdio.h>

/**
 * main - prints name of file it is compiled from
 *
 * Return: void
 */

int main(void)
{
	/* __FILE__ macros defined in std lib */
	printf("%s\n", __FILE__);

	return (0);
}
