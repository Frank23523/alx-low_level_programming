#include "main.h"

/**
 * _isdigit - check for lowercase
 * @c: is what the function _isdigit checks
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
