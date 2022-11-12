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
	int i, j, k, l;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	k = 0;
	while (s1[k] != '\0')
		k++;
	if (n > k)
		n = k;
	p = malloc((sizeof(char) * (i + n)) + 1);
	if (p == 0)
		return (NULL);
	for (l = 0; s1[l]; l++)
	{
		p[l] = s1[l];
	}
	for (j = 0; j <= n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
