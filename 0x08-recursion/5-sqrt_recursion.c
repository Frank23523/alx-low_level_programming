#include "main.h"

/**
 * look_for_sqrt - loops through numbers for sqrt match
 * @n: number for calculation
 * @look: start number for looking
 *
 * Return: look
 */

int look_for_sqrt(int n, int look)
{
	if (look * look == n)
		return (look);
	if (look * look > n)
		return (-1);

	return (look_for_sqrt(n, look + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number for calculation
 *
 * Return: natural square root, else 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (look_for_sqrt(n, 0));
}
