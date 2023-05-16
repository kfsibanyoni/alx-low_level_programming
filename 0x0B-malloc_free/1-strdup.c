#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str:
 *
 * Return: NULL if (str == NULL)
 * funtion returns a pointer to the duplicated string
 * NULL if insufficient mem
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *strB;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	strB = malloc(sizeof(char) * (len + 1));
	if (strB == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		strB[i] = str[i];
		i++;
	}

	strB[len] = '\0';
	return (strB);
}
