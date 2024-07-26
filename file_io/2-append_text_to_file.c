#include "main.h"

/**
 * append_text_to_file - create a file and write it at the end
 *
 * @filename: Is a NULL terminated string to write to the file
 * @text_content: The name of the file to create
 *
 * Return: 1 if success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
	{
		perror("open ails");
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
			perror("write fails");
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
