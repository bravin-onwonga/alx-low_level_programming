#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*dest = *src;
		src++;
		i++;
	}

	return (dest);
}
