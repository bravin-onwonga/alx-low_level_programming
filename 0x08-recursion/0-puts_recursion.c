#include "main.h"

/**
  * _puts_recursion - prints a string using recursion
  *
  * @s: string pointer
  */

void _puts_recursion(char *s)
{
	if (s == '\0')
		return;
	_putchar(s);
	_puts_recursion(s++);
}

