#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
   * main - check the code
    *
	 * Return: Always 0.
	  */
int main(void)
{
	int r;
	srand(time(0));

	r = rand() % 31 - 10;
	print_line(r);
	return (0);
}
