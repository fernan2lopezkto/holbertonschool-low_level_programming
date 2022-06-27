#include "main.h"
#include <stdlib.h>
/**
 **array_range - function
 *@min: initial number
 *@max: stop namber
 *Return: int
 */
int *array_range(int min, int max)
{
	int size, i = 0, *pr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pr = malloc(size * sizeof(int));
	if (pr == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		pr[i] = min;
		i++;
	}
	return (pr);
}
