#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, l_count = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[l_count] != '\0')
		{
			l_count++;
		}

		if (write(file_d, text_content, l_count) == -1)
		{
			return (-1);
		}
	}

	close(file_d);
	return (1);
}
