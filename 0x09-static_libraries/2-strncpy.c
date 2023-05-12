#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to string one
 * @src: point string two
 * @n: bytes
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
