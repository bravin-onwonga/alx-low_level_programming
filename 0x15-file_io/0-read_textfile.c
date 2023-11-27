#include "main.h"

/**
 * read_textfile - reads letters characters of a file and
 *			writes it to stdout
 *
 * @filename: file to read and write
 * @letters: number of characters to read and write
 * Return: number of chars write; 0 if write or read fails
 *		or if written bytes are not equal to read bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytes_read, bytes_written;
	char *buf;

	buf = malloc(sizeof(char *) * letters);
	if (filename == NULL || buf == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || (bytes_written != bytes_read))
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes_written);
}
