#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /* keep dividing n by 2 power 1*/
	}

	_putchar((n & 1) + '0'); /*for a remainder of 1 or 0 on each function call*/
}
