#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: is what the function _isupper checks
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
