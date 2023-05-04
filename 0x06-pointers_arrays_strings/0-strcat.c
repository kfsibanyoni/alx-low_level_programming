#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to string one
 * @src: pointer to string two
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[len + i] = src[i];

	}

	return (dest);
}
