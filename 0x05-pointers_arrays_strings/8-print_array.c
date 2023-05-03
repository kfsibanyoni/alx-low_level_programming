#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer
 * @n: int
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);

		if (x != n - 1)
		{
			printf(",");
			printf(" ");
		}
		x++;
	}

	printf("\n");
}
