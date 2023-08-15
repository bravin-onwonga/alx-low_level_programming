#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - intializes a struct
  *
  * @d: pointer to struct dog
  * @name: value of first member
  * @age: value of second member
  * @owner: value of third member
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
