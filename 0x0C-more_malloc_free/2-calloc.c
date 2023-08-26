#include "main.h"

/**
  * _calloc - function similar to calloc.
  *
  * @nmemb: number of elements in array
  * @size: size of each element
  * Return: address to memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ar;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
		return (NULL);

	ptr = ar;

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = '\0';

	return (ar);
}
