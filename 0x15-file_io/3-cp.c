#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (sucess)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	cp_file_from_file_to(argv[1], argv[2]);

	return (0);

}

/**
 * cp_file_from_file_to - copies contents of fil_from to file_to
 * creates file_to if it doesn't exits permission being rw-rw-r--
 *
 * @file_from: file with content to copy
 * @file_to: file to copy to | Truncate if exists
 * Return: 0 (sucess)
*/

int cp_file_from_file_to(const char *file_from, const char *file_to)
{
	int fd;
	FILE *fp = fopen(file_from, "rb");
	ssize_t bytes_written, read_bytes;
	size_t size = 0;
	char *buffer[1024];

	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	read_bytes = fread(buffer, STDOUT_FILENO, sizeof(buffer), fp);
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (read_bytes > 0)
	{
		size += read_bytes;
	}

	fd = open(file_to, O_TRUNC | O_RDWR | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	bytes_written = write(fd, buffer, size);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fclose(fp);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}


	return (0);
}
