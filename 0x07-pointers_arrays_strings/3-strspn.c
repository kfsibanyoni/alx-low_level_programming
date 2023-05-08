#include "main.h"

/**
 * _strspn - get length of prefix substring
 *
 * @s: string to check
 * @accept: prefix
 *
 * Return: number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}

	}

	return (i);
}

