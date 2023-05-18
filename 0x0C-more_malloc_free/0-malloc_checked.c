#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: pos ints only
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof *ptr * b);

	if (ptr == NULL)
		exit(98);

	return(ptr);
}
