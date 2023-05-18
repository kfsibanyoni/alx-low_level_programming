#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
	char *nstr;

	size1 = 0;
	size2 = 0;
	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	if (n < size2)
		nstr = malloc(sizeof(char) * (size1 + n + 1));
	else
		nstr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		nstr[i] = s1[i];

	j = 0;
	while (n >= size2 && i < (size1 + size2))
		nstr[i++] = s2[j++];

	while (n < size2 && i < (size1 + n))
		nstr[i++] = s2[j++];

	nstr[i] = '\0';

	return (nstr);
}
