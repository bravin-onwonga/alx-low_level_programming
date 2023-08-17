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

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
		return (NULL);

	dawg->name = name;
	dawg->age = age;
	dawg->owner = owner;
	return (dawg);
}
