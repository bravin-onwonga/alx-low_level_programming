#include <stdio.h>

/**
 * main - first 50 Fibonacci numbers
 *Return: 0, sucess
 */
int main(void)
{
	int x, y, sum;
	int temp;
	int count = 0;/* count of numbers printed*/

	x = 1;/* first value*/
	y = 2;/*second value*/
	printf ("%d, %d", x, y);
	while (count < 48)
	{
		if (count < 48)
		{
			printf(", ");
		}
		temp = x + y;
		printf("%d", temp);
		x = y;
		y = temp;
		count++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
