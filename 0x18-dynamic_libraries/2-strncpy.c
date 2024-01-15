#include "main.h"

/**
  * _strncpy - function similar to strncpy of std output.
  *
  * @dest: first string
  * @src: string to be copied
  * @n: number of characters to copy to dest
  * @i - integer (iterator)
  * Return: pointer to dest
  */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
