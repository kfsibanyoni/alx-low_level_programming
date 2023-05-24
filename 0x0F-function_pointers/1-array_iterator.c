#include "function_pointers.h"

/**
 * array_iterator - executes a fucntion given as a parameter on ea. element of []
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x; /* counter */

	/* fails */
	if (array == NULL || action == NULL)
		return;

	/* execute function over ea. element */
	x = 0;
	while (x < (int) size)
	{
		action(array[x]);
		x++;
	}
}
