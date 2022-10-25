#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: pointer to string to be reversed
 *
 *Return: Nothing.
 */

void print_rev(char *s)
{
	int i;

	for (s[i] == '\0'; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
