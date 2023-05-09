#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate character in string
 *
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to first occurance of char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s - 1);
		}
		if (s[i] == 0)
		{
			return (NULL);
		}
	}

	return (0);
}
