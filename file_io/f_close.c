#include "main.h"

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
