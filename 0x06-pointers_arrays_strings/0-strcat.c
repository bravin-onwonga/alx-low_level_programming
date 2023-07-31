#include "main.h"

/**
  * _strcat - function that works similar to strcat
  *
  * @dest: first string
  * @src: string to be concatenated to dest
  * @len - integer variable for length of dest
  * @j - integer
  * Return: pointer to final string.
  */

char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (*(dest + len) != '\0')
		len++;
	for (j = 0; *(src + j) != '\0'; j++)
		dest[(len + j)] = src[j];
	return (dest);
}
