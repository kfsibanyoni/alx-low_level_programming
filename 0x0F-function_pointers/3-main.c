#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of elements
 *
 * Return: mathematical operation
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int, int);
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (!op)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", op(a, b));
	return (0);
}
