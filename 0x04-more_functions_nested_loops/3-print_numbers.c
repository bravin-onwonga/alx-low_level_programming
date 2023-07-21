#include "main.h"

/**
  * print_numbers - prints int from 0 to 9
  *
  * @c - character that holds value to be printed
  */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
