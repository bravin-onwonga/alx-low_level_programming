#ifndef DOG_H
#define DOG_H

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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/*More prototypes*/
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
