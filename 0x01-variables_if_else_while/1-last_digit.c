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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	double lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n\
, lastDigit);
	}
	if (lastDigit < 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n\
, lastDigit);
	}
	return (0);
}
