#include "dog.h"

/**
 * print_dog - prints a struct
 *
 * @d: struct
 */

void print_dog(struct dog *d)
{
	if (d = NULL)
		d = malloc(sizeof(struct dog));

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Name: %f\n", d->age);

	if (d->owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->owner);
}
