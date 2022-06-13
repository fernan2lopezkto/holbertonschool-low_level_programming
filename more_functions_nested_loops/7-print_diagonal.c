#include "main.h"


void print_diagonal(int n)
{
	int i, e;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			
			for (e = 0; e < i; e++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');

}
