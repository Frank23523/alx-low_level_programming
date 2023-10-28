#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument number
 * @argv: argument array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int a;
	int b;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		char *arg = argv[a];

		for (b = 0; arg[b] != '\0'; b++)
		{
			if (!isdigit(arg[b]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(arg);
	}

	printf("%d\n", add);

	return (0);
}
