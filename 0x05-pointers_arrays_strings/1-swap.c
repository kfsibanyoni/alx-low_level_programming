#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer a
 * @b: pointer b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
