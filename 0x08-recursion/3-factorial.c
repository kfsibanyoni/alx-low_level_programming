#include "main.h"

/**
 * factorial - factorial of given number
 *
 * @n: argument
 *
 * Return: n < 0 -> -1(error)
 * factorial(0): 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
