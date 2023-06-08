#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @index: index, starting from 0 of the bit you want to set
 * @n: pointer
 *
 * Return: 1 if it worked
 * -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);

	*n &= ~(index >> 1);
	return (1);
}
