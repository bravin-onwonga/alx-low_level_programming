#include "main.h"

char **strtow(char *str)
{
	int i, k, len, len_word;
	char **ar;
	char *c;

	if (str == NULL || str == "")
		return (NULL);
	
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != " " && str[(i + 1)] == " ")
			len++;
	}
	len++;

	ar = malloc(len * sizeof(char *));
	
	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != " ")
			c[k] = str[i];
		if (str[i] != " " && str[(i + 1)] == " ")
			c[(k + 1)] = '\n';
		k++;
	}

	len_word = 0;
	for (i = 0; c[i] != '\n'
