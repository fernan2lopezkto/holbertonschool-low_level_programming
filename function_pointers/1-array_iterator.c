#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *array_iterator - function for ran a array
 *@array: is the array
 *@size: is array size
 *@action: function to do whit array
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				(*action)(array[i]);
		}
	}
}
