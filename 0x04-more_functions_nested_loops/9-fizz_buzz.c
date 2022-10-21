#include <stdio.h>

/**
 *main - prints 'Fizz' if divisible by 3
 *prints 'Buzz' if divisible by 5,
 *prints 'FizzBuzz' if divisible by 15
 *for numbers between 1 - 100.
 *Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && (i % 15 != 0))
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
