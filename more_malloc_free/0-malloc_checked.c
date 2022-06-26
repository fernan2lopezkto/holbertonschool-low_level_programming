#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function to create space
 * @b: amount of space required
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);
	if (pr == NULL)
		exit(98);
	return (pr);
}
