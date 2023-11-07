#include "main.h"

/**
 * rev_string - prints string then prints it in reverse
 *
 * @s: pointer to string
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (j = 0; s[j] != '\0'; j++)
		;

	i = 0;
	j = j - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;
	}
}
