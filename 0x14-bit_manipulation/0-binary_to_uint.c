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
	unsigned int val = 0, i = 0;

	if (!b || !(*b))
		return (0);

	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			val <<= 1;
			val += 1;
		}
		else
			val <<= 1;
		i++;
	}
	return (val);
}
