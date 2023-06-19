#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer that initializes struct dog
 * @name: string to intialize name
 * @age: float to initialize age
 * @owner: string to initialize owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}



