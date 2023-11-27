#include "main.h"

int cp_file_from_file_to(char *file_from, char *file_to);
void check_fails(int file_state, int fd, char *file_name, char action_tried);

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success); else exit 98 can't read first argument or is null
 */

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

	if (!(file_from))
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	res = cp_file_from_file_to(file_from, file_to);

	return (res);
}

/**
 * cp_file_from_file_to - does the copying to a file from buffer
 *
 * @file_to: file to copy to
 * @file_from: number of characters read
 * Return: 0 (success); exit 99 can't write to second argument
 *			exit 100 can't close file descriptor
 */

int cp_file_from_file_to(char *file_from, char *file_to)
{
	int fd, fd_txt, close_fd, close_fdtxt;
	mode_t mode = 0664;
	ssize_t bytes_read = 1024, bytes_written;
	char buf[1024];

	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
		check_fails(-1, -1, file_to, 'W');

	fd_txt = open(file_from, O_RDONLY);

	if (fd_txt == -1)
		check_fails(-1, -1, file_from, 'R');

	while (bytes_read == 1024)
	{
		bytes_read = read(fd_txt, buf, sizeof(buf));
		if (bytes_read == -1)
			check_fails(-1, -1, file_from, 'R');
		bytes_written = write(fd, buf, bytes_read);
		if (bytes_written == -1)
		{
			close_fdtxt = close(fd_txt);
			close_fd = close(fd);
			check_fails(close_fdtxt, fd_txt, NULL, 'C');
			check_fails(close_fd, fd, NULL, 'C');
			check_fails(-1, -1, file_to, 'W');
		}
	}

	close_fdtxt = close(fd_txt);
	check_fails(close_fdtxt, fd_txt, NULL, 'C');
	close_fd = close(fd);
	check_fails(close_fd, fd, NULL, 'C');
	return (0);
}

/**
 * check_fails - checks for fails in read, write and close
 *
 * @file_state: state of file
 * @fd: int value of file descriptor
 * @file_name: name of file being read or written to
 * @action_tried: can be Read(R), Write(W) or Close(C)
 */

void check_fails(int file_state, int fd, char *file_name, char action_tried)
{
	if (action_tried == 'W' && file_state == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_name);
		exit(99);
	}

	if (action_tried == 'R' && file_state == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}

	if (action_tried == 'C' && file_state == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
