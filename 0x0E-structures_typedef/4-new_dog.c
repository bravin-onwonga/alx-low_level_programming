#include "dog.h"

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
	int i, len;
	char *name_cpy;
	char *owner_cpy;

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
	{
		free(dawg);
		return (NULL);
	}

	for (len = 0; name[len] != '\0'; len++)
		;

	name_cpy = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
	{
		name_cpy[i] = name[i];
	}

	for (len = 0; owner[len] != '\0'; len++)
		;

	owner_cpy = malloc(sizeof(char) * len);

	if owner_cpy == NULL
	{
		free(owner_cpy);
	}

	for (i = 0; i < len; i++)
	{
		owner_cpy[i] = owner[i];
	}
	
	dawg->name = name;
	dawg->age = age;
	dawg->owner = owner;
}
