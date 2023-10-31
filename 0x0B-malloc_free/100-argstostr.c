#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: 
 * @av: 
 *
 * Return: pointer to new string, else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, count = 0, len = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;

	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		i++;
	}

	len = ac + len;

	result = malloc((sizeof(char) * len) + 1);

	if (result == NULL)
		return (NULL);

	i = 0;

	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[count] = av[i][j];
			count++;
		}
		
		if (result[count] == '\0')
		{
			result[count++] = '\n';
		}
		i++;
	}

	return (result);
}
