#include "main.h"

/**
  * rev_string - prints string then prints it in reverse
  *
  * @s: pointer to string
  * @i - integer
  * @j - integer
  */

void rev_string(char *s)
{
	int i, j, n;

	for (i = 0; s[i] != '\0'; i++)
		;
	char r[i];
	n = i;
	j = 0;
	while (j < n)
	{
		r[j] = s[i];
		j++;
		i--;
	}
	*s = r;
}
