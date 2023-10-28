#include <stdio.h>
#include "main.h"

/**
 * _atoi - changes string to integer
 * @s: pointer to string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int x = 0;
	int result = 0;
	int len = 0;
	int y = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len && y == 0; i++)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (x % 2)
				digit = -digit;

			result = result * 10 + digit;

			y = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			y = 0;
		}
	}

	if (y == 0)
		return (0);

	return (result);
}


/**
 * main - entry point
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0, else 1
 */

int main(int argc, char *argv[])
{
	int product, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);

	return (0);
}
