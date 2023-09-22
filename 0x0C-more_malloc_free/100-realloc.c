#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ar;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	ar = malloc(new_size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		ar[i] = ptr[i];
	}
	return (ar);
}