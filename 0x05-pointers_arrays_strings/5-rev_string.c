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
	int i, len;
	char temp;

	for (len = 0; *(s + len) != '\0'; len++)
		;

	i = 0;
	while (*(s + i))
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		len--;
		i++;
	}
}
