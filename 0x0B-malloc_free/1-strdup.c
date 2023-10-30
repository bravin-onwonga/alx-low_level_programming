#include "main.h"

unsigned int str_len(char *str);

/**
 * _strdup - duplicates a string
 *
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int len, i;

	i = 0;
	len = str_len(str);

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	while (i < len)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
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
