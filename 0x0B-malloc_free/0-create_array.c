#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of string
 * @c: character
 *
 * Return: Pointer to array, else NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
