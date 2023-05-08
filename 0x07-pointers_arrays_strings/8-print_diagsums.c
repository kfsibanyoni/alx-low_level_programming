#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer
 * @size:
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int r, c;

	r = 0;
	c = 0;
	i = 0;

	while (i < size)
	{
		r = r + a[(size * i) + i];
		c = c + a[(size * (i + 1)) - (i + 1)];
		i++;
	}

	printf("%d, %d\n", r, c);
}
