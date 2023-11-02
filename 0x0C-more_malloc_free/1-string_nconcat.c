#include "main.h"

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
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (len_s2 <= n)
		n = len_s2;

	new_len = len_s1 + n;

	new_str = malloc(new_len + 1);

	if (new_str == NULL)
		return (NULL);

	new_str = concatenate_str(new_str, s1, s2, n);

	return (new_str);
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
