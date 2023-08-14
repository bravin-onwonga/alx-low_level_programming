#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  *
  * @b: size of memory
  * Return: address to memory
  */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b * sizeof(int *));

	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
