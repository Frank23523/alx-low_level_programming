#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: is the string pointer
 */

void puts2(char *str)
{
	int l = 0;
	int n = 0;
	char *y = str;
	int i = 0;

	while (*y != '\0')
	{
		y++;
		l++;
	}

	n = l - 1;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
