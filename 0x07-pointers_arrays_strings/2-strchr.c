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
	while (*s != c)
	{
		if (!*s++)
			return (NULL);

		return (*s);
	}
	return (0);
}
