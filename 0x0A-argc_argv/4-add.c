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
	int sum, num, i, j, k;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
