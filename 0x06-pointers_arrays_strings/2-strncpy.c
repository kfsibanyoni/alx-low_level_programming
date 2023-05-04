#include "main.h"

/**
 * _strncpy(char *dest, char *src, int n) - copies a string
 *
 * @dest: pointer to string one
 * @src: point string two
 * @n: bytes
 *
 * Return: copied string
 */

char _strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest = src;
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
