#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "main.h"

/**
 * create_file - Create a file and write to it
 *
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor;
    ssize_t bytes_written;

    if (filename == NULL)
        return (-1);

    // Check if the file exists
    if (access(filename, F_OK) == 0)
    {
        // File exists, open it with write permissions and truncate it
        file_descriptor = open(filename, O_WRONLY | O_TRUNC);
        if (file_descriptor == -1)
        {
            perror("Failed to open file");
            return (-1);
        }
    }
    else
    {
        // File does not exist, create it with the specified permissions
        file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
        if (file_descriptor == -1)
        {
            perror("Failed to create file");
            return (-1);
        }
    }

    if (text_content != NULL)
    {
        bytes_written = write(file_descriptor, text_content, strlen(text_content));
        if (bytes_written == -1)
        {
            perror("Failed to write to file");
            close(file_descriptor);
            return (-1);
        }
    }

    if (close(file_descriptor) == -1)
    {
        perror("Failed to close file");
        return (-1);
    }

    return (1);
}
