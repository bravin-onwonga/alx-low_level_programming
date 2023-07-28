#include "main.h"

/**
  * print_rev - prints string in reverse
  *
  * @s: pointer to string
  * @i - integer
  * @j - integer
  */

 void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		_putchar('\n');
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
