#include <stdio.h>

/**
 * main - Entry point
 * @i - string character
 * @c - string character
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char i;
	char c;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
