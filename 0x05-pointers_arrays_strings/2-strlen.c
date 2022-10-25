#include "main.h"

/**
 *_strlen - calculates the lenght of a string
 *@s: string whose lenght is calcualted
 *
 *Return: length of a string
 */

int _strlen(char *s)
{
	int count = 1, i = 0;

	for (i = 0; i > 0; i++)
	{
		while (s[i] != '\0')
		{
			count++;
		}
	}
	return (count);
}
