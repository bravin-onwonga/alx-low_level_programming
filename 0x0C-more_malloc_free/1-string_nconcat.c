#include "main.h"

unsigned int str_len(char *str);
char *concatenate_str(char *new_str, char *s1, char *s2, unsigned int n);

/**
 * string_nconcat - concatenates s1 and n characters of s2
 *
 * @s1: first string
 * @s2: second string
 * @n: no. of chars of s2 to concatenate
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, new_len;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}

	if (s2 == NULL)
	{
		s2 = malloc(1);
		s2[0] = '\0';
	}

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);

	if (len_s2 <= n)
		n = len_s2;

	new_len = len_s1 + n;

	new_str = malloc(new_len);

	if (new_str == NULL)
		return (NULL);

	new_str = concatenate_str(new_str, s1, s2, n);

	return (new_str);
}

/**
 * str_len - calculates length of a string
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

/**
 * concatenate_str - does the concatenation
 *
 * @new_str: new string after concatenating
 * @s1: first string
 * @s2: second string
 * @n: no. of chars of s2 to concatenate
 * Return: new string
 */

char *concatenate_str(char *new_str, char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}

	k = 0;
	while (k < n)
	{
		new_str[j] = s2[k];
		k++;
		j++;
	}

	return (new_str);
}
