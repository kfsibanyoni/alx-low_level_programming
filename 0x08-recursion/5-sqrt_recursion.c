#include "main.h"

/**
 * checkpt - evaluate for root
 *
 * @n: value to evaluate
 * @root: natural sqr
 *
 * Return: natural sqr
 */

int checkpt(int n, int root)
{
	if (n == root * root)
		return (root);
	if (root < n)
		/*iterate root until root * root true*/
		return (checkpt(n, ++root));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: argument
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	int root = 1;

	return (checkpt(n, root));
}
