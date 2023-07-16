#include <stdio.h>

/**
 *main - Entry point
 *@c - represents the alphabet letter
 *Return: 0 (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
