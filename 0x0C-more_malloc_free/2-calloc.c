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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
