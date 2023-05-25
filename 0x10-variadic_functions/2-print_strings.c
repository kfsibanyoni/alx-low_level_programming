#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list strs;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(strs, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(strs, char *);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(strs);
}
