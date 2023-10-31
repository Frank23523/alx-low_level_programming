#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: copied string
 *
 * Return: Copy of string, else NULL
 */

char *_strdup(char *str)
{
	int i;
	char *s;
	int x = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	
	while (str[x])
	{
		s[x] = str[x];
		x++;
	}

	return (s);
}
