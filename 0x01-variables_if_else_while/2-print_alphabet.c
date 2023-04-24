#include <stdio.h>
/**
 * main - entry point: print char alphabet
 *
 * Return: 0 always
 *
 */
int main()
{
	/* local variable definition */
	char letters = 'a';
	
	/* while loop execution */
	while(letters <= 'z')
	{
		putchar(letters\n);
		letters++;
	}
	return 0;
}
