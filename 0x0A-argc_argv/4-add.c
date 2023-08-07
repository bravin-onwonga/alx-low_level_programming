#include "main.h"

/**
  * strLen - calculate length of a string
  *
  * @c: string
  * @l - integer
  * Return: length of string
  */

int strLen(char *c)
{
	int l;

	for (l = 0; c[l] != '\0'; l++)
		;
	return (l);
}

/**
  * intLen - calculate length of integer
  *
  * @n: integer
  * Return: length of n
  */

int intLen(int n)
{
	if (n / 10 == 0)
		return (1);
	return (1 + intLen(n / 10));
}

/**
  * main - entry point
  *
  * @argc: argument count
  * @argv: argument vector
  * @sum - some of positive numbers in argument
  * @num - holds integer from argument
  * @i - iterator
  * @str_len -length of argument before atoi
  * @len_num - lenght of num after atoi
  * Return: 0 (success); otherwise 1
  */

int main(int argc, char *argv[])
{
	int sum, num, i, str_len, len_num;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}

		str_len = strLen(argv[i]);
		num = atoi(argv[i]);
		if (num > 0)
		{
			len_num = intLen(num);
			if (len_num == str_len)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}