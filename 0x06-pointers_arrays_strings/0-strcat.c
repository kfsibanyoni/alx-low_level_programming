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
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
