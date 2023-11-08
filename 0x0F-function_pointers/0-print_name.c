#include "function_pointers.h"

/**
 * printing - prints each char till empty element
 * @name - string containg chars
 */
void printing(char *name)
{
	int i = 0;
	while (*name != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}


/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: call back function that executes printing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
