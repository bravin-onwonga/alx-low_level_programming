#include "main.h"

int cp_file_from_file_to(const char *file_to, char *text_content, size_t size);

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (sucess)
*/

int main(int argc, char *argv[])
{
	FILE *fp;
	char buffer[1024];
	size_t size = 0;
	ssize_t read_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fp = fopen(argv[1], "rb");
	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	read_bytes = fread(buffer, 1, sizeof(buffer), fp);
	if (read_bytes <= 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (read_bytes > 0)
	{
		size += read_bytes;
	}

	cp_file_from_file_to(argv[2], buffer, size);
	fclose(fp);
	return (0);
}

/**
 * cp_file_from_file_to - copies contents of fil_from to file_to
 * creates file_to if it doesn't exits permission being rw-rw-r--
 *
 * @text_content: file with content to copy
 * @file_to: file to copy to | Truncate if exists
 * @size: number of bytes in text_content
 * Return: 0 (sucess)
*/

int cp_file_from_file_to(const char *file_to, char *text_content, size_t size)
{
	int fd;
	ssize_t bytes_written;

	fd = open(file_to, O_TRUNC | O_RDWR | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	bytes_written = write(fd, text_content, size);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	close(fd);
	if (close(fd) != -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}


	return (0);
}
