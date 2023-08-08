#include "main.h"

/**
  * _strdup - duplicates a string
  *
  * @str: string to duplicate
  * Return: pointer to copy of str
  */

char *_strdup(char *str)
{
	int i, l;
	char *ar;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		i++;

	ar = malloc(i * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		ar[l] = str[l];

	return (ar);
}
