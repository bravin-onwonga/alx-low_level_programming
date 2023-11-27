#include "main.h"

/**
 * get_strlen - finds length of string
 *
 * @s: string
 * Return: length of string
 */

size_t get_strlen(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}

int cp_file_from_file_to(char *file_from, char *file_to);

int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int res;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	if (file_from == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	res = cp_file_from_file_to(file_from, file_to);

	return (res);
}

int cp_file_from_file_to(char *file_from, char *file_to)
{
	int fd, fd_txt;
	mode_t mode = 0664;
	ssize_t bytes_read, bytes_written;
	char *buf;

	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fd_txt = open(file_from, O_RDONLY);
	buf = malloc((get_strlen(file_from) * sizeof(char *)));
	if (buf == NULL || fd_txt == -1)
	{
		close(fd);
		close(fd_txt);
		free(buf);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	while ((bytes_read = read(fd_txt, buf, 1024)) > 0)
	{
		bytes_written = write(fd, buf, bytes_read);
		if (bytes_written == -1)
		{
			close(fd);
			close(fd_txt);
			free(buf);
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	free(buf);
	close(fd_txt);
	if (close(fd) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
