#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: size of array in bytes
 *
 * Return: pointer to allocated memory, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, total_size = 0;
	char *alm;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	alm = malloc(total_size);

	if (alm == NULL)
		return (NULL);

	while (i < total_size)
	{
		alm[i] = 0;
		i++;
	}

	return (alm);
}
