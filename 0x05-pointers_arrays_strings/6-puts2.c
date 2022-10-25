#include "main.h"

/**
 *puts2 - prints even numbers of a string
 *@str: string parameter
 *
 *Return: Nothing.
 */

void puts2(char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			ch = str[i];
			_putchar(ch);
		}
	}
	_putchar('\n');
}
