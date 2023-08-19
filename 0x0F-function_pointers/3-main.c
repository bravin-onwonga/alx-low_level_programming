#include "3-calc.h"

/**
  * main - Entry point
  *
  * @argc: argument count
  * @argv: argument vector
  * Return: result (success); otherwise print Error and exit
  */

int main(int argc, char *argv[])
{
	int res, a, b;
	char opr;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	opr = *argv[2];

	if ((opr == '%' || opr == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(a, b);

	printf("%d\n", res);

	return (0);
}
