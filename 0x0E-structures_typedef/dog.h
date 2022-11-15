#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct containing three elements
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: create a struct dog with three elements,
 *	name, age and the name of the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
