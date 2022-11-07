#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum amout of coins to make change
 *	   prints 0 if amount is negative
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 1 if arguments are not excatly 1 else 0
 */

int main(int argc, char *argv[])
{
	int num, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	while (num > 0)
	{
		if (num >= 25)
		{
			num -= 25;
			count += 1;
		}
		else if (num >= 10)
		{
			num -= 10;
			count += 1;
		}
		else if (num >= 5)
		{
			num -= 5;
			count += 1;
		}
		else if (num >= 2)
		{
			num -= 2;
			count += 1;
		}
		else
		{
			num -= 1;
			count += 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
