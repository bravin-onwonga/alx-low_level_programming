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
	int len, i;

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
	{
		return (NULL);
	}

	for (len = 0; name[len] != '\0'; len++)
		;

	dawg->name = malloc(len + 1);

	if (dawg->name == NULL)
	{
		free(dawg->name);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		dawg->name[i] = name[i];
	}
	dawg->name[i] = '\0';

	dawg->age = age;

	for (len = 0; owner[len] != '\0'; len++)
		;

	dawg->owner = malloc(len + 1);

	if (dawg->owner == NULL)
	{
		free(dawg->owner);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
	{
		dawg->owner[i] = owner[i];
	}

	dawg->owner[i] = '\0';

	return (dawg);
}
