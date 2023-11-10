#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char ch, *str, *separator = "";
	int num;
	float fnum;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%s%c", separator, ch);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", separator, num);
				break;
			case 'f':
				fnum = va_arg(args, double);
				printf("%s%f", separator, fnum);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
