#include "main.h"

void print_triangle(int size)
{
	int filas, columnas, resta;

	resta = size - 1;
	if (size > 0)
	{
		for (filas = 0; filas < size; filas++)
		{
			for (columnas = 0; columnas < size; columnas++)
			{
				if (columnas < resta)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		resta--;
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
