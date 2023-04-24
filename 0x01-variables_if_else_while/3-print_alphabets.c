#include <stdio.h>

int main(void)
{
	/* local variable definition */
	char upLetters = 'A';
	char lowLetters = 'a';
	char upper;
	char lower;

	/* while loop execution */
	while((lowLetters <= 'z') && (upLetters <= 'Z'))
	{
		upper = putchar(upLetters);
		upLetters++;
		
		lower = putchar(lowLetters);
		lowLetters++;
	}
	putchar(lower + upper);
	return (0);
}
