#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 * @i - integer
 * @c - character
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
