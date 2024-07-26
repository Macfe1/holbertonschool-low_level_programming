#include "main.h"

/**
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	ssize_t bytes_written = 0; 

	if (filename == NULL)
		return (-1);

	file_descriptor = open (filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		
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

	close(file_descriptor);
	return (1);
}
