#include <stdio.h>

int main(void)
{
	/* local variable definition */
	char upLetters = 'A';
	char lowLetters = 'a';
	
	/* while loop execution */
	while((lowLetters <= 'z') && (upLetters <= 'Z'))
	{
		char up = putchar(upLetters);
		upLetters++;
		
		char low = putchar(lowLetters);
		lowLetters++;
	}
	putchar(low + up);
	return 0;
}
