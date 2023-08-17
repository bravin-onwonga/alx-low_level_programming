#include "dog.h"


/**
  * strLen - calc len of string
  *
  * @s: string
  * Return: lenght of string
  */

int strLen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		len++;
	return (len);
}

/**
  * strCpy - copies a string
  *
  * @src: string
  * @dest: where copy is store
  * Return: dest
  */

char *strCpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
  * new_dog - creates a new struct similar to dog
  *
  * @name: first element
  * @age: second element
  * @owner: third element
  * Return: pointer to new struct (success); otherwise NULL
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;
	int len_name, len_owner;

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
	{
		return (NULL);
	}

	len_name = strLen(name);

	dawg->name = malloc(len_name);

	if (dawg->name == NULL)
	{
		free(dawg->name);
		free(dawg);
		return (NULL);
	}

	len_owner = strLen(owner);

	dawg->owner = malloc(len_owner);

	if (dawg->owner == NULL)
	{
		free(dawg->owner);
		free(dawg);
		return (NULL);
	}

	strCpy(dawg->name, name);
	dawg->age = age;
	strCpy(dawg->owner, owner);

	return (dawg);
}
