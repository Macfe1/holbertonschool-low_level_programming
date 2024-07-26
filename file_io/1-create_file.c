#include "main.h"

/**
 * create_file - create a file and write it
 *
 * @filename: Is a NULL terminated string to write to the file
 * @text_content: The name of the file to create
 *
 * Return: 1 if success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
	{
		perror("fails");
		return (-1);
	}

	if (text_content == NULL)
	{
	}

	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			perror("fails");
			close(file_descriptor);
			return (-1);
		}
	}

	if (close(file_descriptor))
	{
		perror("fails close");
		return (0);
	}
	return (1);
}
