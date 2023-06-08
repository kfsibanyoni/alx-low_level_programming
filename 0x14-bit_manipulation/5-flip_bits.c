#include "main.h"

/**
 * flip_bits - return number of bits to flip from one number to another
 *
 * @n: number
 * @m: flipped
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int b;

	b = 0;
	flip = n ^ m;

	while (flip)
	{
		flip += b & 1;
		flip >>= 1;
	}

	return (b);
}
