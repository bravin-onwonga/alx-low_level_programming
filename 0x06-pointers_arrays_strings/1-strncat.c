#include "main.h"

/**
  * _strncat - concatenates n strings of src to dest
  *
  * @dest: first string
  * @src: string to be concatenated
  * @n: number of characters to be added to dest
  * @i - integer iterator
  * @len - lenght of dest
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	while (*(dest + len) != '\0')
		len++;

	i = 0;
	while ((*(src + i) != '\0') && i < n)
	{
		dest[(len + i)] = src[i];
		i++;
	}
	return (dest);
}
