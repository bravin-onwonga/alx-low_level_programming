#include <stdio.h>
/**
 * main - Entry point
 *@i - first value
 *@j - second value
 *@k - third value
 *Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i != j && j != k && j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && k == '9')
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
