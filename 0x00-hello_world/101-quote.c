#include <stdio.h>

/**
 * main -Entry point
 *
 *@i - integer literal
 *@str - string array
 *Return: 1 (Sucess)
 */

int main(void)
{
	int i;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (1);
}
