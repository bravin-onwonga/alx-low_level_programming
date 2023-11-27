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
 * create_file - creates a file if it doesn't exit, truncates if it does and
 *			writes content from text_content, file mode is rw------
 * @filename: file to create
 * @text_content: content to write to file; if null create empty file
 * Return: 1 (success); otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t bytes_written;
	mode_t mode = 0600;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = malloc(1);
		text_content[0] = '\0';
	}

	len = get_strlen(text_content);

	bytes_written = write(fd, text_content, len);

	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
