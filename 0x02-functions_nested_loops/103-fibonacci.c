#include <stdio.h>

/**
 *main - sum of even numbers in Fibonacci series not exceeding 4, 000,00
 *Return: 0, success
 */
int main(void)
{
	int sum;
	int temp;
	int x = 1, y = 2;

	sum = 2;
	while (temp <= 4000000)
	{
		temp = x + y;
		if (temp % 2 == 0)
			sum += temp;
		x = y;
		y = temp;
	}
	printf("%d\n", sum);
	return (0);
}
