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
	int ch;
	char buffer[1024];
	int fd;
	FILE *fp;
	ssize_t read_bytes;

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);

	read_bytes = read(fd, buffer, letters);

	if (read_bytes > 0)
	{
		while ((ch = fgetc(fp)) != EOF)
		{
			putchar(ch);
		}
	}
	fclose(fp);
	return (read_bytes);
}
