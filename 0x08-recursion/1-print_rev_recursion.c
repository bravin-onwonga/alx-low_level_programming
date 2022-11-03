#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *@s: string parameter
 *
 *Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s);
	s++;
	_putchar(*s);
}
