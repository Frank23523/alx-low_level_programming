#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: is the main string
 * @needle: is the substring
 *
 * Return: located string, else 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *x, *y;

	while (*haystack != 0)
	{
		x = haystack;
		y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == 0)
			return (haystack);

		haystack++;
	}
	return (0);
}
