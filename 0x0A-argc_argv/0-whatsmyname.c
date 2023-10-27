#include "main.h"

/**
 * main - prints the program name
 *
 * Return: 0 sucsess
 */

int main(int argc, char *argv[])
{
	int index;

	index = argc - argc;
	printf("%s\n", argv[index]);

	exit(EXIT_SUCCESS);
}
