#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars & initializes w\ pecific char.
 *
 * @size: malloc
 * @c: make up array
 *
 * Return: Null if (size == 0)
 * *mat if (NULL || fail)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mat;

	if (size == 0)
		return (NULL);

	mat = malloc(sizeof(char) * size);

	if (mat == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		mat[i] = c;

	return (mat);
}
