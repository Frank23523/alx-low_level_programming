#include "main.h"

/**
 * _isalpha - check if lowercase or uppercase
 * @c: is what the function _isalpha checks
 * Return: 1 if letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
