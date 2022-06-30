#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - send a fragment to array to function
 *@array: array
 *@size: array long
 *@cmp: function
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (array != NULL && size > 0 && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				break;
		}
	return (i);
}
