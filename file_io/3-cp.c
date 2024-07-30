#include "main.h"

/**
 * function_open - To open a fd
 *
 * @argv: to provide the path
 * @flags: permisions at the time to open
 *
 * Return: the file descriptor or exit if fail
 */
int function_open(char *argv, int flags)
{
	int fd = open(argv, flags);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}

	return (fd);
}

/**
 * function_close - To close the file descriptions
 *
 * @fd: second file descriptor, we are creating
 *
 * Return: 0 success
 */
int function_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * main - write a program that copies the content of a file to another file.
 *
 * @argc: number of parameters
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, fd_second = 0;
	char buffer[1024];
	ssize_t bytes_read = 0, bytes_written = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = function_open(argv[1], O_RDONLY);
	fd_second = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_second == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd);
		exit(99);
	}
	while ((bytes_read = read(fd, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_second, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd);
			close(fd_second);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		close(fd_second);
		exit(98);
	}
	function_close(fd_second);
	function_close(fd);
	return (0);
}
