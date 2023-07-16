#include <stdio.h>

/**
 *main - Entry point
 *@i - represents the alphabet letter
 *Return: 0 (Sucess)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
