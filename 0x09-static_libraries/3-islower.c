#include "main.h"

/**
 * _islower - check for lowercase
 * @c: is what the function _islower checks
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
