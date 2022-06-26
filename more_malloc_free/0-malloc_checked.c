#include "main.h"
#include <stdlib.h>
/**
 *
 */
void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc (b);
	if (pr == NULL)
		exit (98);
	return (pr);
}
