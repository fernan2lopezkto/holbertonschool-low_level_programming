#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void free_grid(int **p, int h)
{
	for(h--; h != 0; h--)
		free(p[h]);
	free(p);
}
