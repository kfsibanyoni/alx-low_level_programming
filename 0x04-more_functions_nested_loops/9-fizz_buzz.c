#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 * Return: void
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 != 0 && x % 5 != 0)
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
