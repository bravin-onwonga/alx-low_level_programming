#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
  * struct dog - stucture for dog
  *
  * @name: first member
  * @age: second member
  * @owner: third memberi
  *
  * Description: struct for variable dog with characteristics
  *				 name, age and owner
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
