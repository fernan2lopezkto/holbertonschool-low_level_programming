#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_grid - function to free preebious malloc
 *@grid: is the poiter to prebious malloc
 *@height: is the previous pointer array long
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int size;

	for (size = 0; size < height; size++)
		free(grid[size]);
	free(grid);
}
