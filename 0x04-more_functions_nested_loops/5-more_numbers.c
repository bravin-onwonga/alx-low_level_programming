#include "main.h"

/**
  * printInt - prints integer using _putchar
  * @n: integer to be printed
  */

void printInt(int n)
{
	if (n / 10)
	{
		printInt(n / 10);
	}
	_putchar((n % 10) + 48);
}

/**
  * more_numbers - prints numbers 0 to 14 ten times
  *
  * @i - hold integer to be printed
  * @j - holds value for the while loop
  */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			printInt(i);
		}
		_putchar('\n');
		j++;
	}
}

