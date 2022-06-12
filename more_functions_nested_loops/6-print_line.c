#include "main.h"

/**
 * print_line - funtion that write a line
 * @n: longer of line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');

}
