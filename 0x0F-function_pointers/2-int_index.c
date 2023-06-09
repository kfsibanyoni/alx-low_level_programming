#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array pointer
 * @size: number of elements in array
 * @cmp: pointer to function to compare the values
 *
 * Return: index of first element where cmp return not 0
 * if NULL return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
