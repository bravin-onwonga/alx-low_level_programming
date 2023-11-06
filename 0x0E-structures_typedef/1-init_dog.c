#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct
 * @name: first element
 * @age: second element
 * @owner: third element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
