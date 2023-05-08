#include "main.h"

/**
 * _memcpy - cpoies memory area
 *
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
