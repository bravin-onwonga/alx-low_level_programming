#include "main.h"

int main(int argc, char *argv[])
{
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

	cp_file_from_file_to(argv[1], argv[2]);

	return (0);

}

int cp_file_from_file_to(const char *file_from, const char *file_to)
{
	int fd;
	int FD;
	ssize_t bytes_written, read_bytes;
	char *buffer = malloc(sizeof(file_from));

	fd = open(file_to, O_CREAT | O_WRONLY | O_APPEND, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	FD = open(file_from, O_RDONLY);

	read_bytes = read(FD, buffer, sizeof(file_from));

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	bytes_written = write(fd, buffer, sizeof(buffer));

	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	close(FD);
	close(fd);
	return (0);
}
