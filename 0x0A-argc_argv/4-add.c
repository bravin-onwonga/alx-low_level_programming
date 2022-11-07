#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the adds two integers
 *		print error if a non-integer is given
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 1 if there is a non_integer character otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || (argv[i][j] >= '0' && argv[i][j] <= '9')))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	int ans = 0;

	for (k = 0; k < argc; k++)
	{
		n = argv[k];
		ans += n;
	}
	printf("%d\n", ans);
	return (0);
}
