#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - make the array whit pointers
 * @width: width
 * @height: height
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **mirta;
	int i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);

	mirta = malloc(height * sizeof(int *));/*size of int != size of int* */
	if (mirta == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mirta[i] = malloc(width * sizeof(int));
		if (mirta[i] == NULL)
		{
			for (i--; i >= 0 ; i--)/*free for all times*/
				free(mirta[i]);
			free(mirta);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			mirta[i][j] = 0;
		}
	}
	return (mirta);
}
