#include "dog.h"

/**
 * new_dog - creates a new instance of struct dog
 *
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: pointer to new dog; otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = *name;
	d->age = age;
	d->owner = *owner;

	return (d);
}
