#include "main.h"

/**
 * main - prints all arguments passed
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
