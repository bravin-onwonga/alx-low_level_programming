#include <stdio.h>

/**
 * main - Entry point
 * @i - integer
 * @j - integer
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i != '0')
				putchar(i);
			putchar(j);
			if (i == '9' && j == '9')
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
