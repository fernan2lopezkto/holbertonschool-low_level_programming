#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mirte;
	unsigned int i, st;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	st = nmemb * size;

	mirte = malloc(st);
	if (mirte == NULL)
		return (NULL);

	for (i = 0; i < st; i++)
		mirte[i] = 0;
	return (mirte);

}
