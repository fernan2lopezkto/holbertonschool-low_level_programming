#include "main.h"
/**
 * print_square - hehe print square
 * @size: is the size of the square
 */
void print_square(int size)
{
	int i, ii;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (ii = 0; ii < size; ii++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
}
