#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * 0 if: there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		x = 2 * x + (b[i] - '0');
	}

	return (x);
}