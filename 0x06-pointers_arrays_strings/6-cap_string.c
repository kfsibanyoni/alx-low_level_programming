#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 *
 * @str: pointer to string
 *
 * Return: str capitalised
 */

char *cap_string(char *str)
{
	int m, n;
	char separators[] = " \t\n,;.!?\"(){}";

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
		}

		n = 0;
		while (separators[n] != '\0')
		{
			if (str[m] == separators[n] && str[m + 1] >= 97 && str[m + 1] <= 122)
				str[m + 1] -= 32;
			n++;
		}
	}
	return (str);
}
