#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *     contains a copy of the string given as a parameter
 *@str: string parameter to be duplicated
 *
 *Return: pointer to str copy
 */

char *_strdup(char *str)
{
	char *ch;
	int i, k;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ch = malloc(sizeof(char) * (i + 1));

	if (ch == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		ch[k] = str[k];

	return (ch);
}
