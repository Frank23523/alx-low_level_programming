#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest point
 * @max: highest point
 *
 * Return: pointer to the newly created array, else NULL
 */

int *array_range(int min, int max)
{
	int *result, i, diff;

	if (min > max)
		return (NULL);

	diff = max - min;

	result = malloc((sizeof(int) * diff) + sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		result[i] = min;
		min++;
	}

	return (result);
}
