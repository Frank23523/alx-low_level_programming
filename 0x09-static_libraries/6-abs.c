#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: is the number the function checks
 * Return: -n if less than zero, n if otherwise
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
