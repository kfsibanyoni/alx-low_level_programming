#include "main.h"

/**
 * get_bit - eturns the value of a bit at a given index
 *
 * @n: value
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
