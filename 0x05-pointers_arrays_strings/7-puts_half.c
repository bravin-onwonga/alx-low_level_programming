#include "main.h"

/**
  * puts_half - prints the last half of a string.
  *             (length - 1) / 2 if length is odd
  *
  * @str: pointer to string
  * @i - integer
  * @j - integer
  */

void puts_half(char *str)
{
	int i, j;
	
	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i - 1) / 2; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
