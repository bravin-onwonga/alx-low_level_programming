#include "main.h"

/**
 * create_array - creates and intializes an array using malloc
 *
 * @size: size of array
 * @c: character to be member of array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL || size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
