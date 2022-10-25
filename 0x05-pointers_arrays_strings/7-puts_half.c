#include "main.h"

/**
 *puts_half - prints half of a string
 *if length is -ve then length - 1 is used
 *@str: pointer parameter that points to the string
 *
 *Return: Nothing.
 */

void puts_half(char *str)
{
	int i, k, l;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		l = i / 2;
		for (k = l; k != '\0'; ++k)
		{
			ch = str[k];
			_putchar(ch);
		}
	}
	else
	{
		i = i + 1;
		l = i / 2;
		for (k = l; k != '\0'; k++)
		{
			ch = str[k];
			_putchar(ch);
		}
	}
	_putchar('\n');
}
