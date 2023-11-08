#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printing - prints each char till empty element
 * @name: string containg chars
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
