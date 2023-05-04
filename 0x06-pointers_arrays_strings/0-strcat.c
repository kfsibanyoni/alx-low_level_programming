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
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest = src;
		++dest;
		++src;
		j++;
	}

	return (dest);
}
