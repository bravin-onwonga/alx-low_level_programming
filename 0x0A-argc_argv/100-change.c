#include "main.h"

/**
 * main - calculatesthe minimum number of coins to make change
 *		for an amount of money:25, 10, 5, 2, 1 coins
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success); otherwise 1
 */

int main(int argc, char *argv[])
{
	int num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}

	num_coins = calc_change(atoi(argv[1]));
	printf("%d\n", num_coins);

	exit(EXIT_SUCCESS);
}

/**
 * calc_change - does the calculation recursively
 *
 * @n: amount to find change
 * Return: number of coins
 */

int calc_change(int n)
{
	if (n / 25 >= 1)
		return ((n / 25) + calc_change(n % 25));
	else if (n / 10 >= 1)
		return ((n / 10) + calc_change(n % 10));
	else if ((n / 5) >= 1)
		return ((n / 5) + calc_change(n % 5));
	else if ((n / 2) >= 1)
		return ((n / 2) + calc_change(n % 2));
	else
		return (n);
}
