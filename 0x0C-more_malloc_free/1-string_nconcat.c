#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: number of bytes of s2
 *
 * Return: pointer to newly allocated space in memory, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0, s2len = 0, len, i1, i2;
	char *join;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	if (n >= s2len)
		len = s1len + s2len;
	else
		len = s1len + n;

	join = malloc((sizeof(char) * len) + 1);

	if (join == NULL)
		return (NULL);

	i1 = 0;
	i2 = 0;

	while (i1 < len)
	{
		if (i1 <= s1len)
			join[i1] = s1[i1];
		if (i1 >= s1len)
		{
			join[i1] = s2[i2];
			i2++;
		}
		i1++;
	}
	join[i1] = '\0';

	return (join);
}
