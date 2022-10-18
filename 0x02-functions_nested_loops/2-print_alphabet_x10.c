#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *followed by a new line
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++
	}
}
