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

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	i = 0;
	while (i <= strlen(name))
	{
		d->name[i] = name[i];
		i++;
	}

	d->age = age;

	j = 0;
	while (j <= strlen(owner))
	{
		d->owner[j] = owner[j];
		j++;
	}
	return (d);
}
