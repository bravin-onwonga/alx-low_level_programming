#include "main.h"

/**
  * puts_half - prints the last half of a string.
  *             (length - 1) / 2 if length is odd
  *
  * @str: pointer to string
  * @i - iteratoe
  * @len - index before null byte
  * @half - middle of the string
  */

void puts_half(char *str)
{
	int len, half, i;

	len = 0;

	while (*(str + len) != '\0')
		len++;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len / 2) + 1;

	for (i = half; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
