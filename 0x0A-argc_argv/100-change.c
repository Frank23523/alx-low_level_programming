#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0, else 1
 */

int main(int argc, char *argv[])
{
	int n;
	int change;
	int a;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	change = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && n >= 0; a++)
	{
		while (n >= coins[a])
		{
			change++;
			n -= coins[a];
		}
	}

	printf("%d\n", change);

	return (0);
}
