#include "main.h"

/**
 * reverse_array - function
 * @a: array
 * @n: size
 */
void reverse_array(int *a, int n)
{
	int var, i = 0;

	while (i < n)
	{
		n--;
		var = a[n];
		a[n] = a[i];
		a[i] = var;
		i++;
	}
}
