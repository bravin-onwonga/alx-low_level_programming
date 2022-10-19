#include <stdio.h>

/**
 * main - sums all numbers divisible by 3 or 5
 *Return: the sum
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	return (sum);
}

