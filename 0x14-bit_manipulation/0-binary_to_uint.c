#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number
 * 	0: if one or more chars in the string b that is not 0 or 1
 * 	or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		if (b[i] == '1')
		{
			value <<= 1;
			value += 1;
		}
		else
			value <<= 1;
	}
	return (value);
}
