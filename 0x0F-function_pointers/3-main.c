#include "3-calc.h"

/**
 * main - performs operations on int args
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: result of operation (success); otherwise
 *	exit with status 98(argument are not 4), 99(operator not
 *	+, /, -, *, %), 100(division by 0)
 */

int main(int argc, char *argv[])
{
	int res, num1, num2;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(op);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(num1, num2);
	printf("%d\n", res);

	return (0);
}
