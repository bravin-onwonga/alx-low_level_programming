#include <stdio.h>

/**
 *main - Entry point
 *@i - represents the alphabet letter
 *Return: 0 (Sucess)
 */

int main(void)
{
	char c;
	char ch;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
