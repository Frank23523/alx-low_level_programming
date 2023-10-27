#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string to be changed
 *
 * Return: changed string
 */

char *leet(char *str)
{
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 10)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
