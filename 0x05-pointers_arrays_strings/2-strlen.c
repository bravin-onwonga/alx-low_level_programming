#include "main.h"

/**
  * _strlen - finds length of a string
  *
  * @s: pointer to the first character of string
  * @i - integer
  * Return: length of string
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
