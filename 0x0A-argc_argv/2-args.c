#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: count
 * @argv: str args
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
