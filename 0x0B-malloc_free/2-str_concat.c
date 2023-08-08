#include "main.h"

/**
  * getLen - claculates length of a string
  *
  * @c: pointer to string
  * Return: length of string
  */

int getLen(char *c)
{
	int len;

	for (len = 0; c[len] != '\0'; len++)
		;

	return (len);
}

/**
  * str_concat - concatenates s1 and s2
  *
  * @s1: first string
  * @s2: string to add to s1
  * Return: pointer to string
  */

char *str_concat(char *s1, char *s2)
{
	int i, j, len_s1, len_s2;
	char *ar;

	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	len_s1 = getLen(s1);
	len_s2 = getLen(s2);

	ar = malloc((len_s1 + len_s2) * sizeof(char) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		ar[i + j] = s2[j];
	}

	return (ar);
}
