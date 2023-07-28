#include "main.h"

/**
  * _strlen - finds length of a string
  *
  * @s: pointer to the first character of string
  * @i - integer
  * @len - holds value of length
  * Return: length of string
  */

int _strlen(char *s)
{
	int i, len;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != ' ')
			len++;
	}

	return (len);
}
