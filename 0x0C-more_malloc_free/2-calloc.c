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
	int *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ar[i] = 0;

	return (ar);
}
