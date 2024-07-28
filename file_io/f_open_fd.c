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
