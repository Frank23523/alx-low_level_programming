#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value to be changed
 * @index: starting point
 *
 * Return: value of a bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_at_index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit_at_index = (n >> index) & 1;
	return (bit_at_index);
}
