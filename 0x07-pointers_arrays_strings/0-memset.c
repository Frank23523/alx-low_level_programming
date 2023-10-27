#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: array to be filled
 * @b: character used to fill
 * @n: number of times to be filled
 *
 * Return: always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
