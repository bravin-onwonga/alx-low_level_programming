#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL || text_content == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (0);
	}

	bytes_written = write(fd, text_content, sizeof(text_content) - 2);

	if (bytes_written == -1)
	{
		return (-1);
	}

	return (1);
}
