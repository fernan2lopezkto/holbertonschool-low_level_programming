#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - free the memory of dogs
 *@d: poiner to dog
 *Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
