#include "3-calc.h"

int main(int argc, char *argv[])
{
	int res, a, b;
	int (*func)(int, int);
	char opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[1]);

	opr = *argv[2];

	if ((opr == '/' || opr == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(a, b);

	printf("%d\n", res);
	return (0);
}
