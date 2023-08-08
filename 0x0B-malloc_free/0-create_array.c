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

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	
	return (ar);
}
