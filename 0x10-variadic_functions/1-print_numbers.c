#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed bxt numbers
 * @n: number of args passed
 *
 * Return: if (separator == NULL) dont print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nms;
	unsigned int i;

	va_start(nms, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nms, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nms);
}
