#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, n, temp;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
