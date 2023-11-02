#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success; otherwise exit 98
 */

int main(int argc, char *argv[])
{
	unsigned long long int res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", res);

	return (0);
}
