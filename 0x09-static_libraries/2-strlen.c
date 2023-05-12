#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int lng = 0;

	while (*s != '\0')
	{
		lng++;
		s++;
	}

	return (lng);
}
