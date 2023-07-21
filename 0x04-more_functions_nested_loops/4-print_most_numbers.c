#include "main.h"

/**
  * print_most_numbers - prints int from 0 to 9
  *
  * @c - holds value to be printed
  */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	_putchar('\n');
}
