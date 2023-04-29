#include <stdio.h>
#include "main.h"

int main(void)
{
	int x;

	for (x = 1; x < 100; x++)
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
		else 
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
		printf("\n");
}
