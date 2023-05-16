#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional grid created by alloc_grid function(3)
 *
 * @grid: matrix to free
 * @height: col size
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	if (grid != NULL || height != 0)
	{
		while (n < height)
		{
			free(grid[n]);
			n++;
		}

		free(grid);
	}
}
