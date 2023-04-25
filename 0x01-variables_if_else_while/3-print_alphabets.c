#include <stdio.h>

int main(void)
{
	/* local variable definition */
	char upLetters = 'A';
	char lowLetters = 'a';

	/* while loop execution */
	while (lowLetters <= 'z')
	{
		putchar(lowLetters);
		lowLetters++;
	}
	while (upLetters <= 'Z')
	{
		putchar(upLetters);
		upLetters++;
	}
	putchar('\n');
	return (0);
}
