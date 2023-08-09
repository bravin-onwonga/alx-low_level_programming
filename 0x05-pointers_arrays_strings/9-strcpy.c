#include "main.h"

/**
  * _strcpy - copies all characters of src to dest
  *
  * @dest: destination
  * @src: string to copy
  * Return: pointer to copied string
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
