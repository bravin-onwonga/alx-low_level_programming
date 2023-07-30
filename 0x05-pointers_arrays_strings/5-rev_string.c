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
	int i;
	char *r;

	for (i = 0; s[i] != '\0'; i++)
		;
	while(i)
		r = s[i];
	return r;
}
