#include "main.h"

/**
  * _atoi - a function that convert a string to an integer
  *
  * @s: pointer to first char in string.
  * Return: integer in string
  */

int _atoi(char *s)
{
	/* Declaring variables */
	int i, n, count;
	unsigned int num;

	/* Initializing variables */
	count = 0;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			count++;
		if ((s[i] >= '0' && s[i] <= '9') && (s[(i + 1)] != ' '))
		{
			n = s[i] - '0'; /* Change char to int */
			num = num * 10 + n;/* Append int to num */
		}
		else if ((s[i] >= '0' && s[i] <= '9') && (s[(i + 1)] == ' '))
		{
			n = s[i] - '0';
			num = num * 10 + n;
			break;
		}
	}

	if (count % 2 != 0)
	{
		num = num * -1;
	}
	return (num);
}
