#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: if NULL is passed, treat it as an empty string
 * return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *strc;

	size1 = 0;
	size2 = 0;
	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	strc = malloc(sizeof(char) * (size1 + size2 + 1));
	if (strc == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < size1; i++)
			strc[i] = s1[i];
	}
	else
		s1 = "";
	j = 0;
	if (s2)
	{
		for (; i < size1 + size2; i++)
		{
			strc[i] = s2[j];
			j++;
		}
	}

	strc[i] = '\0';
	return (strc);
}
