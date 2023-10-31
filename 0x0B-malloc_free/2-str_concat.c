#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins two strings
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: concatenated string, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int i1;
	int i2;
	char *join;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i1 = 0; s1[i1] != '\0'; i1++)
		;

	for (i2 = 0; s2[i2] != '\0'; i2++)
		;

	i = i1 + i2;

	join = malloc((sizeof(char) * i) + 1);

	if (join == NULL)
		return (NULL);

	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
		join[i1] = s1[i1];
	}

	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
		join[i1] = s2[i2];
		i1++;
	}

	join[i1] = '\0';

	return (join);
}
