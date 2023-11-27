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
	ssize_t read_bytes, write_bytes;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_bytes = read(fd, buf, letters);

	if (read_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write_bytes = write(0, buf, read_bytes);

	if (write_bytes == -1 || (write_bytes != read_bytes))
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (write_bytes);
}
