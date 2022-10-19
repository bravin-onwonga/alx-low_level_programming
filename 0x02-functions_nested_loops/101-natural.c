#include <stdio.h>

/**
 * main - sums all numbers divisible by 3 or 5
 *Return: 0, success
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
			printf(sum);
		}
	}
	return (0);
}

