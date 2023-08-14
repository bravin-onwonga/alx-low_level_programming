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
	void *ar;

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);

	return (ar);
}
