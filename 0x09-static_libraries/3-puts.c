#include "main.h"

/**
  * _puts - functions similarly to the puts function
  *
  * @str: pointer to str
  * @i - integer
  */

void _puts(char *str)
{
		int i;

		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
}
