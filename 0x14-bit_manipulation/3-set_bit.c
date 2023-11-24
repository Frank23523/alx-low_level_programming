#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: bit to be set
 * @index: given index
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	set_index = 1 << index;

	*n = *n | set_index;

	return (1);
}
