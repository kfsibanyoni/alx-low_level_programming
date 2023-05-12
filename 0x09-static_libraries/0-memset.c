#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
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
