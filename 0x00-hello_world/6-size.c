#include <stdio.h>

/**
 * main - entry point. Prints size of var.
 *
 * Return: 0 always
 */
int main(void)
{
	/* intitializing var */
	char char_;
	int int_;
	long int longInt;
	long long int longLongInt;
	float float_;

	/* sizeof() used to evaluate size of var. */
	printf("Size of a char: %u byte(s)\n", sizeof(char_));
	printf("Size of a int: %u byte(s)\n", sizeof(int_));
	printf("Size of a long int: %u byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %u byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %u byte(s)\n", sizeof(float_));
	return (0);
}
