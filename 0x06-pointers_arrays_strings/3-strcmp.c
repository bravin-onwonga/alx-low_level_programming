#include "main.h"

/**
  * _strcmp - compares the lenght of two strings
  *
  * @s1: first string
  * @s2: second string
  * Return: 15 if s1 is longer, -15 if s2 is longer and 0 if same
  */


int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	len_s2 = 0;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (len_s1 > len_s2)
		return (15);
	else if (len_s1 < len_s2)
		return (-15);
	else
		return (0);
}
