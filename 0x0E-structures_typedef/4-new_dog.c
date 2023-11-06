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
	unsigned long int i, j;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(name));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	i = 0;
	while (i < sizeof(name))
	{
		d->name[i] = name[i];
		i++;
	}

	d->age = age;

	j = 0;
	while (j < sizeof(owner))
	{
		d->name[j] = name[j];
		j++;
	}
	return (d);
}
