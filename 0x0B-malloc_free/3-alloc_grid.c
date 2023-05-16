#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: row length
 * @height: col length
 *
 * Return: NULL on failure or if (w || h) <= 0
 */

int **alloc_grid(int width, int height)
{
	int i, j, **mat;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* row mem. allocation & outer for loop */
	mat = malloc(height * sizeof(int *));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* col mem. allocation */
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			free(mat);
			for (j = 0; j <= i; j++)
			{
				free(mat[j]);
			}

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}

	return (mat);
}
