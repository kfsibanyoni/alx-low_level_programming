#include <stdio.h>

int main()
{
	/* local variable definition */
	char upLetters = 'A';
	char lowLetters = 'a';
	
	/* while loop execution */
	while((lowLetters <= 'z') && (upLetters <= 'Z'))
	{
		putchar(upLetters);
		upLetters++;
		putchar(lowLetters);
                lowLetters++;
	}
	return 0;
}
