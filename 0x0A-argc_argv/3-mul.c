#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the multiplies two numbers
 *		print error is one number is given
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 1 if one integer is given otherwise 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
	}
	return (0);
}
