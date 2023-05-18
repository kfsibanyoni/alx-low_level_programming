#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: smallest int
 * @max: largest int
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i, j, n;
	int *arr; /* pointer to newly created array */

	/* check */
	if (min > max)
		return (NULL);

	/* size of arr */
	n = max - min + 1;

	arr = malloc(sizeof(int) * n);
	/* malloc fails */
	if (arr == NULL)
		return (NULL);

	/* sorted array */
	i = min;
	j = 0;
	while (i <= max)
	{
		arr[j] = i;
		i++;
		j++;
	}

	return (arr);
}
