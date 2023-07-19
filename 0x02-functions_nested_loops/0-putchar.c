#include "main.h"

/**
 * main - Entry point
 *
 * @str - string
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char c;
	char str[]="_putchar";

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
