#include "main.h"
/**
 * _atoi - transforms string into integer
 * @s: pointer to string
 *
 * Return: result
 */
int _atoi(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	return (0);
}

