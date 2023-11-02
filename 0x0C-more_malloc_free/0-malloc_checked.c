#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of memory in bytes to be allocated
 * Return: memory address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
