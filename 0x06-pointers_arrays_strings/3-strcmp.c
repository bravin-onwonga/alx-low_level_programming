#include "main.h"

/**
  * _strcmp - compares the lenght of two strings
  *
  * @s1: first string
  * @s2: second string
  * @len_s1 - length of s1
  * @len_s2 - length of s2
  * Return: 15 if s1 is longer, -15 if s2 is longer and 0 if same
  */


int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;

	len_s1 = 0;
	while (*(s1 + len_s1) != '\0')
		len_s1++;

	len_s2 = 0;
	while (*(s2 + len_s2) != '\0')
		len_s2++;

	if (len_s1 > len_s2)
		return (15);
	else if (len_s1 < len_s2)
		return (-15);
	else
		return (0);
}
