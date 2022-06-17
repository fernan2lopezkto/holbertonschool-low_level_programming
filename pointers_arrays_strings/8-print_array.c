#include "main.h"
#include <stdio.h>

/**
 *print_array - the function
 *@a: array
 *@n: array long
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)/*quitarle coma y espacio al ultimo numero*/
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
