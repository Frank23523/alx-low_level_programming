#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is the first parameter
 * @b: is the second parameter
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
