#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
