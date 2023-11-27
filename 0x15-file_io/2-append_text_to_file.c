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

/**
 * append_text_to_file - appends text to a file; does not create if it
 *			doesnt exist
 *
 * @filename: file to append to
 * @text_content: content to append
 * Return: 1 (success); otherwise -1 if filename is NULL, write fails
 *			no write permissions
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	len = get_strlen(text_content);

	bytes_written = write(fd, text_content, len);

	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
