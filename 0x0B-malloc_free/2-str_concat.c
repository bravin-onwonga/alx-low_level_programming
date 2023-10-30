#include "main.h"

unsigned int str_len(char *str);

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, k, i;
	char *ar;

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);

	ar = malloc(sizeof(char) * (len_s1 + len_s2) - 1);

	if (ar == NULL)
		return (NULL);

	while (i < (len_s1 - 1))
	{
		ar[i] = s1[i];
		i++;
	}

	k = 0;
	while (k < len_s2)
	{
		ar[i] = s2[k];
		i++;
		k++;
	}

	return (ar);
}

/**
 * str_len - calculates lenght of a string
 *
 * @str: string
 * Return: length of string
 */

unsigned int str_len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;

	return (i);
}
