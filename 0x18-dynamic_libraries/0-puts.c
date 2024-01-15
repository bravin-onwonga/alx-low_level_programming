#include "main.h"

/**
 * _puts - function similar to puts
 *
 * @s: string
 */

void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
