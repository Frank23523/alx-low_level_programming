#include "main.h"

/**
 * flip_bits - flip bits of one number to another
 * @n: bit to flip
 * @m: model bit
 *
 * Return: number of bits you would need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int gap;

	gap = n ^ m;

	while (gap > 0)
	{
		if (gap & 1)
		{
			i++;
		}
		gap = gap >> 1;
	}

	return (i);
}
