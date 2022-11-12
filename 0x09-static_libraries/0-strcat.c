#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: string on which src string is appended
 *@src: string to be appended
 *
 *Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
