#include "main.h"
#include <stdlib.h>

int _strlen(const char *s);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string to be converted
 *
 * Return: the converted number, else 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; i < _strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		unit = (unit * 2) + (b[i] - '0');
	}
	return (unit);
}

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of string
*/
int _strlen(const char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
