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
	int find;

	find = 0;
	while (s[find] != '\0')
	{
		if (s[find] == c)
		{
			return (s);
		}
		else if (find)
			return (NULL);

		++s;
	}
	return (0);
}
