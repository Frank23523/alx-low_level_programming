#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two square matrix diagonals
 * @a: pointer to 1st element of 2d
 * @size: number of rows and columns
 */

void print_diagsums(int *a, int size)
{
	int firstsum = 0;
	int secondsum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		firstsum = firstsum + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		secondsum = secondsum + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", firstsum, secondsum);
}
