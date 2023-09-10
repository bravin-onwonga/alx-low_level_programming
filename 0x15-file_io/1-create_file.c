#include "main.h"

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int fd;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd > 0)
	{

	}


}