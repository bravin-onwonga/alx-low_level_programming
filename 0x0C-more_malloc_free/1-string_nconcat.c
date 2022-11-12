#include "main.h"

/**
 *string_nconcat - concatenates two strings
 *@s1: string parameter
 *@s2: string parameter to be concatenated to s1
 *@n: integer
 *
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;
	p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (; k < (i + n); k++)
	{
		p[k] = s2[k - i];
	}
	p[k] = '\0';
	return (p);
}
