#include <stdio.h>

/**
 * main - first 50 Fibonacci numbers
 *Return: 0, success
 */
int main(void)
{
	long int x, y;
	long int temp;
	int count = 0;/* count of numbers printed*/

	x = 1;/* first value*/
	y = 2;/*second value*/
	printf ("%lu, %lu", x, y);
	while (count < 49)
	{
		if (count <= 48)
		{
			printf(", ");
		}
		temp = x + y;
		printf("%lu", temp);
		x = y;
		y = temp;
		count++;
	}
	printf("\n");
	return (0);
}
