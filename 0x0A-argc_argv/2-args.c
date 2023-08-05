#include "main.h"

/**
  * main - Entry point
  *
  * @argc: argument count
  * @argv: argument vector
  * @i - integer (iterator)
  * Return: Always 0 (success)
  */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
