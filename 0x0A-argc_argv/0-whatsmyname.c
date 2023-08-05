#include "main.h"

/**
  * main - Entry point with argc and argv
  *
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	exit(EXIT_SUCCESS);
}
