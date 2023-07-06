#include "main.h"

/**
 *flip_bits - returns the number of bits needed to flip number to another
 *@n: ...
 *@m: ...
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip;

	flip = n ^ m;
	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
