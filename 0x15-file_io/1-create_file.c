#include "main.h"

/**
 * create_file - creates a file with 0600 permission
 * if it didn't exists and truncates it if it did
 *
 * @filename: file to create
 * @text_content: content to copy to filename
 *
 * Return: 1 (success); otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (0);
	}

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		return (-1);
	}

	return (1);
}
