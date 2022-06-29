#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a struct
 * @d: structure pointer
 * @name: string to name
 * @owner: string to owner
 * @age: sring to age
 * Return: void
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
