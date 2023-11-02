#include "main.h"

/**
 * _calloc - similar to calloc
 *
 * @nmemb: number of members
 * @size: size of each member
 * Return: address of the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, ttl_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ttl_size = size * nmemb;

	ptr = malloc(ttl_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ttl_size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
