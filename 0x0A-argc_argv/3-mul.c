#include "main.h"

/**
  * main -Entry point
  *
  * @argc: argument counter
  * @argv: argument vector
  * @res - result of mul argv[1] and argv[2]
  * Return: 0 success; 1 if arguments are more that two
  */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}
