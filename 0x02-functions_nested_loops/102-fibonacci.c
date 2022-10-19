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

	x = 0;/* first value*/
	y = 1;/*second value*/
	while (count < 48)
	{
		if (count != 50)
		{
			printf(", ");
		}
		temp = x + y;
		sum += temp
		x = y;
		y = temp;
		count++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
