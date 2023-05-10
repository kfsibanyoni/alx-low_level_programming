#include "main.h"

/**
 * prime - evaluate for prime
 *
 * @n: val to check
 * @cnt: counter
 *
 * Return: 1 for prime, 0 otherwise
 */

int prime(int n, int cnt)
{
	if (cnt == 1)
		return (1);
	if (n % cnt == 0 && cnt > 0)
		return (0);

	return (prime(n, cnt - 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number to eval.
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, n - 1));
}
