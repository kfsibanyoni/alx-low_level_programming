#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 * @n: bytes
 *
 * Return: string concat
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';
	return (dest);
}
