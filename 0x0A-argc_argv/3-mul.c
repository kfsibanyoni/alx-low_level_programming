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
	/* convert string to int: atoi */
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", a * b);

	return (0);
}

