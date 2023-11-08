#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - test whether functions perform operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int answer;
	char *cl_prompt = argv[2];
	int (*op_func)(int, int) = get_op_func(cl_prompt);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*cl_prompt == '/' || *cl_prompt == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = op_func(num1, num2);
	printf("%d\n", answer);

	return (0);
}
