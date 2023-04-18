#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog struct
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Takes pointers to each member and sets
 * them to the values passed as arguments.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

