#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent in base 2
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		/* n > 0001 shift 1 right */
		print_binary(n >> 1);
	/* if n 0001 put 1, else 0 */
	_putchar((n & 1) + '0');
}
