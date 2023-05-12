#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of args
 * @argv: vector
 *
 * Return: 1 (Error), 0(multiplication)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		/* convert string to int: atoi */
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}

	printf("Error\n");
	return (1);
}

