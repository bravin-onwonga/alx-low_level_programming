#include <stdio.h>

int main(void)
{
	int i;
	char str1[] = "Fizz";
	char str2[] = "Buzz";
	char str3[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s ", str1);
		else if (i % 5 == 0)
			printf("%s ", str2);
		else if (i % 15 == 0)
			printf("%s ", str3);
		else if (i != 100)
			printf("%d ", i);
		else if ( i == 100)
			printf("%d\n", i);
	}
	printf("\n");
	return (0);
}
