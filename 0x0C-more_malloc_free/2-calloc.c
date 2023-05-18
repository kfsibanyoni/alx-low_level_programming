#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to string
 * @b: val. to be filled
 * @n: bytes to fill
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 *
 * @nmemb: elements
 * @size: bytes
 *
 * Return: pointer to the allocated memory.
 * memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	void *arr;

	n = nmemb * size;
	arr = malloc(n);

	if (nmemb == 0 || size == 0 || arr == NULL)
		return (NULL);

	_memset(arr, 0, n);
	return (arr);
}
