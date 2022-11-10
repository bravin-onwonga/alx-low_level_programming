#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: first string parameter
 *@s2: second string parameter
 *
 *Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k, l;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
		i++;
	k = 0;
	while (s2[k] != '\0')
		k++;

	p = malloc(sizeof(char) * (i + k + 2));

	for (l = 0; s1[l]; l++)
	{
		p[l] = s1[l];
	}
	for (j = 0; s2[j]; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);

}
