#include "main.h"

unsigned int str_len(char *str);

/**
 * str_concat - concatenates a string
 *
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, k, i;
	char *ar;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(1);
		s1[0] = '\0';
	}

	if (s2 == NULL)
	{
		s2 = (char *)malloc(1);
		s2[0] = '\0';
	}

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);

	ar = malloc(sizeof(char) * (len_s1 + len_s2) - 1);

	if (ar == NULL)
		return (NULL);

	i = 0;
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
