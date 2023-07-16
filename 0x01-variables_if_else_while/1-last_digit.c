#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * @n - integer
 * @lst_digit - last digit of n
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;
	int lst_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_digit = n % 10;

	if (lst_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_digit);
	if (lst_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_digit);
	if (lst_digit < 6 && lst_digit != 0)
	{
		printf("Last digit of %d is %d and ", n, lst_digit);
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
