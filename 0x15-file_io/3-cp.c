#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file
 * @argc: argument count.
 * @argv: argument array
 *
 * Return: 0 (success), else 97, 98, 99 and 100 (failure)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t char_count = BUFFER_SIZE;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((char_count = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (char_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write(file_to, buffer, char_count) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
