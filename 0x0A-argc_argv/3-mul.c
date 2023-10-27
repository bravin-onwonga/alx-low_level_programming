#include "main.h"

/**
 * main - multiplies and prints the result of two ints
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success); i if three arguments aren't passed
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	exit(EXIT_SUCCESS);
}
