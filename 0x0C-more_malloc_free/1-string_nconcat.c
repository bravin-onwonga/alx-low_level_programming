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
	len++;

	return (len);
}

/**
  * string_nconcat - concatenates n characters of s2 to s1
  *
  * @s1: pointer to s1
  * @s2: pointer to s2
  * @n: number of chars of s2
  * Return: pointer to final string (success)
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, len_s1, len_s2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = getLen(s1);
	len_s2 = getLen(s2);

	if (len_s2 < n)
		n = len_s2;

	ptr = malloc(len_s1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[k] = s1[i];
		k++;
	}
	for (i = 0; i < n; i++)
	{
		ptr[k] = s2[i];
		k++;
	}
	ptr[k] = '\0';

	return (ptr);
}
