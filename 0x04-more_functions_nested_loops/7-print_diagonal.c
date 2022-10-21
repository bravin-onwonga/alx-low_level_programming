#include "main.h"

/**
 * print_diagonal - prints the character '\' after n times
 * @n: number at which '\' is printed
 */

void print_diagonal(int n)
{
	int i = 0;
	char ch = '\';

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(' ');
			i++;
		}
		_putchar(ch);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
