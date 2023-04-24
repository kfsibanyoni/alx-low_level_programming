#include <stdio.h>

int main(void)
{
	/* local variable definition */
	char upLetters = 'A';
	char lowLetters = 'a';
	
	/* while loop execution */
	while((lowLetters <= 'z') && (upLetters <= 'Z'))
	{
		putchar(upLetters);
		A++;
		putchar(lowLetters);
		a++;
	}
	return 0;
}
