#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - allocates memory using malloc
 *@b: size of memory
 *
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
