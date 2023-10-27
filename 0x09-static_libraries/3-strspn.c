#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string with character to be searched
 *
 * Return: number of matches
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (count);
		}
	}
	return (count);
}
