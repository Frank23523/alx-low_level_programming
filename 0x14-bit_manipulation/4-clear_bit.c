#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: bit to set
 * @index: given index
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear_index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	clear_index = ~(1 << index);

	*n = *n & clear_index;

	return (1);
}
