#include <stdio.h>

/**
 * main - Entry point
 * @i - integer
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
