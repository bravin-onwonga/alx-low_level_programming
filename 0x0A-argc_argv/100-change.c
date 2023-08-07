#include "main.h"

int countCoins(int n);

/**
  * main - entry point
  *
  * @argc: argumnent count.
  * @argv: argument vector.
  *
  * Return: 1 if argument is not 1; 0 (success)
  */

int main(int argc, char *argv[])
{
	int num, count;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		num = 0;
	}

	count = countCoins(num);

	printf("%d\n", count);
	exit(EXIT_SUCCESS);
}

/**
  * countCoins - counts the number of coins to get change of n
  *					coins are 25, 10, 5, 2, 1.
  *
  * @n: amount
  * Return: number of coins
  */

int countCoins(int n)
{
	if (n / 25 >= 1)
		return ((n / 25) + countCoins(n % 25));
	else if (n / 10 >= 1)
		return ((n / 10) + countCoins(n % 10));
	else if ((n / 5) >= 1)
		return ((n / 5) + countCoins(n % 5));
	else if ((n / 2) >= 1)
		return ((n / 2) + countCoins(n % 2));
	else
		return (n);
}
