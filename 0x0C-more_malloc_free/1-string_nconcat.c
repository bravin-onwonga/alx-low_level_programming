#include <stdlib.h>
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
	unsigned int i, j, k;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	k = 0;
	while (s1[j] != '\0')
		j++;

	if (n > j)
		n = j;
	p = malloc((sizeof(char) * (i + n + 1)));
	if (p == 0)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (; k <= (i + n); k++)
	{
		p[k] = s2[k - i];
		k++;
	}
	p[k] = '\0';
	return (p);
}
