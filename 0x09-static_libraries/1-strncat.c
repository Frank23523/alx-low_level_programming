#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string pointer parameter
 * @src: second string pointer parameter
 * @n: maximum number of bytes to be concatenated
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *x = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (x);
}
