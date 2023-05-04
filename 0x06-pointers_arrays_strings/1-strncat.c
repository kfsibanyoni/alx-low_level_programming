#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 * @n: bytes
 *
 * Return; string concat
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	for (; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}

	for (; src[i] != '\0' && src[i] < n; i++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
