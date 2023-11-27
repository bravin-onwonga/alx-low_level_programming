#include "main.h"

int cp_file_from_file_to(char *file_to, char *buf, size_t letters);

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

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success); else exit 98 can't read first argument or is null
 */

int main(int argc, char *argv[])
{
	char *file_from, *file_to, *buf;
	int res, fd_txt;
	ssize_t bytes_read;
	size_t letters = 0;

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

	fd_txt = open(file_from, O_RDONLY);
	buf = malloc((get_strlen(file_from) * sizeof(char *)));
	if (buf == NULL || fd_txt == -1)
	{
		close(fd_txt);
		free(buf);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	while ((bytes_read = read(fd_txt, buf, 1024)) > 0)
	{
		letters += bytes_read;
	}

	if (bytes_read == -1)
	{
		close(fd_txt);
		free(buf);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	res = cp_file_from_file_to(file_to, buf, letters);
	close(fd_txt);

	return (res);
}

/**
 * cp_file_from_file_to - does the copying to a file from buffer
 *
 * @file_to: file to copy to
 * @buf: buffer
 * @letters: number of characters read
 * Return: 0 (success); exit 99 can't write to second argument
 *			exit 100 can't close file descriptor
 */

int cp_file_from_file_to(char *file_to, char *buf, size_t letters)
{
	int fd;
	mode_t mode = 0664;
	ssize_t bytes_written;

	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
	{
		close(fd);
		free(buf);
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	bytes_written = write(fd, buf, letters);

	if (bytes_written == -1)
	{
		close(fd);
		free(buf);
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	if (close(fd) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
