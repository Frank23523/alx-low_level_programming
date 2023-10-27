#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: pointer parameter
 */

void rev_string(char *s)
{
	int i;
	int f;
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	f = l - 1;

	for (i = 0; i < f; i++)
	{
		char temp;

		temp = s[i];
		s[i] = s[f];
		s[f] = temp;
		f--;
	}
}
