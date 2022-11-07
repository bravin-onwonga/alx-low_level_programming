#include "main.h"
#include <stdio.h>

/**
 *main -  prints all arguments it receives, including first one
 *        one argument per line
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
