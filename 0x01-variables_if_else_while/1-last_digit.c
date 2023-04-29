#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point: return last digit of n.
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDgt = n % 10;

	if (lastDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	}

	else if (lastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	}

	else if (lastDgt < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	}
	return (0);
}
