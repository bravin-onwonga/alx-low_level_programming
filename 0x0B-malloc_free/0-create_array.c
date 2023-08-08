#include "main.h"

/**
  * create_array - creates an array
  *
  * @size: size of array
  * @c: char
  * Return: pointer to array;  otherwise NULL
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
