#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
		return (*s1 - *s2);
	else if (i > j)
		return (*s1 - *s2);
	else if (i == j)
		return (0);
	
	return (i);
}
