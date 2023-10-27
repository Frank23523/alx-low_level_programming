#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: content of an array (pointer to)
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int f = n - 1;

	while (i < f)
	{
		temp = a[i];
		a[i] = a[f];
		a[f] = temp;
		i++;
		f--;
	}
}
