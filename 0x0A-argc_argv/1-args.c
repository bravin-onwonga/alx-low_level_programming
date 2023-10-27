#include "main.h"

/**
 * main - prints number of arguments passed
 *
 * @argc: argument count
 * @argv: argument vector (unused)
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
