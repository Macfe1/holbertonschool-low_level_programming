#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: What we need to write
 * @letters:  is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t reading, bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	reading = read(file_descriptor, buffer, letters);

	if (reading == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, reading);

	if (bytes_written == -1 || bytes_written != reading)
		return (0);

	free(buffer);
	close(file_descriptor);

	return (bytes_written);

}
