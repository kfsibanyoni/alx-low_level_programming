#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum
 *
 * @a: int a
 * @b: int b
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 *
 * @a: ..
 * @b: ..
 *
 * Return: diff. bxt a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: ..
 * @b: ..
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: ..
 * @b: ..
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}

	return (a / b);
}

/**
 * op_mod - mod
 *
 * @a: ...
 * @b: ...
 *
 * Return: a modulo b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	
	return (a % b);
}
