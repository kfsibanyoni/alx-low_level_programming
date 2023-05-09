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
	while (*s)
	{
		if (*s != c)
		{
			++s;
		}
		else
		{
			return (s);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
