#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success); otherwise 1
 */

int main(int argc, char *argv[])
{
	int sum, i, j, k;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		exit(EXIT_SUCCESS);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] > '9' || argv[i][j] < '0') && argv[i][j] != '-')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	}

	k = 1;

	while (k < argc)
	{
		sum = sum + atoi(argv[k]);
		k++;
	}

	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
