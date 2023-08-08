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
	char *ar;

	ar = malloc(size * sizeof(c));

	if (ar == NULL)
		return (NULL);

	return (ar);
}
