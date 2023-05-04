#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: uppercase equivalent
 */

char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] = str[n] - 32;
		}
	}

	return (str);
}
