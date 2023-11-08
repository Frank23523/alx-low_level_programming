#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array elements to be searched
 * @size: size of array
 * @cmp: call back function that compares elements
 *
 * Return: -1 if no integer and size < 1, else integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
