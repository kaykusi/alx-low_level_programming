#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - function to initialize struct
 * @d: the struct
 * @name: dog name
 * @age: dog age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
