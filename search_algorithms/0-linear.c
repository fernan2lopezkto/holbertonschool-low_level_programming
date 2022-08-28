#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index whit value
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array || !value)
		return(-1);

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
	/*		printf("Found %d at index: %d\n", value, i); */
			return (i);
		}
		i++;
	}
	
	printf("Found %d at index: -1", value);
	return (-1);
}
