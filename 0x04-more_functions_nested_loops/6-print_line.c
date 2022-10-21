#include "main.h"

/**
 *print_line - prints the character '_' n times
 *@n: number of times '_' is printed
 *print \n if n is 0 or less
 */

void print_line(int n)
{
	int i = 0;
	char ch = '_';

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(ch);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
