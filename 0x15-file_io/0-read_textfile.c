#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: letters is the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print (success)
 * 0 if filename in NULL | file can't be read | write fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, bytes_written;
	char *buffer = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	if (buffer == NULL)
	{
		return (0);
	}

	read_bytes = read(fd, buffer, letters);

	if (read_bytes > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, read_bytes);
		if (bytes_written == -1 || (bytes_written != read_bytes))
		{
			free(buffer);
			close(fd);
			return (0);
		}
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
