#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, rev, tmp;

	while (a[n] != '\0')
	{
		n++;
	}

	rev = n - 1;
	for (i = 0; i < rev; i++)
	{
		tmp = a[i];
		a[i] = a[rev];
		a[rev] = tmp;
		rev--;
	}
}
