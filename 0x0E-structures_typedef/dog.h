#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct for a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Desc: This struct contains details for an object `dog`
 *		with its name, age and owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
