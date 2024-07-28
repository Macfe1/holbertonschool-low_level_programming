#include "main.h"

/**
 * function_fchmod - change permissions to the open files
 *
 * @fd_second: second file descriptor, we are creating
 * @mode: permissions
 *
 * Return: 0 if success
 */
int function_fchmod(int fd_second, mode_t mode)
{
	if (fchmod(fd_second, mode) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't set permissions");
		close(fd_second);
		exit(99);
	}

	return (0);
}
