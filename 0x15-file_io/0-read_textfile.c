#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes;

	read_bytes = read(STDIN_FILENO, (void *)filename, letters);

	if (read_bytes > 0)
	{
		return (write(1, filename, letters));
	}
	return (0);
}
