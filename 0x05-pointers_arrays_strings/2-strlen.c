#include "main.h"

/**
 *_strlen - calculates the lenght of a string
 *@s: string whose lenght is calcualted
 *
 *Return: length of a string
 */

int _strlen(char *s)
{
	int count = 1;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}
