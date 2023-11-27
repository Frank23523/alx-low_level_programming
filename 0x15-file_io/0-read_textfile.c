#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters to should read and print
 *
 * Return:  actual number of letters it could read and print, else 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buff;
	ssize_t read_count, write_count;

	if (filename == NULL)
	{
		return (0);
	}

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	read_count = read(file_d, buff, letters);
	write_count = write(STDOUT_FILENO, buff, read_count);

	close(file_d);
	free(buff);

	return (write_count);
}
