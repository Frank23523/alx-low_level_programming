#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, number;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, unsigned int);
		printf("%d", number);

		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
