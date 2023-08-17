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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
