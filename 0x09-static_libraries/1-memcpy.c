#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination copy area
 * @src: memory area to be copied
 * @n: size
 *
 * Return: always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
