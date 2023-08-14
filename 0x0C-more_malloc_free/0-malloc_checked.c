#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  *
  * @b: size of memory
  * Return: address to memory
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(ptr));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
