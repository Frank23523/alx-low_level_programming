#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string pointer parameter
 * @src: second sting pointer parameter
 * @n: number of strings to be copied
 *
 * Return: dest i.e copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
