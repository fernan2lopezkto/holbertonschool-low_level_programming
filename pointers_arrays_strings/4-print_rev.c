#include "main.h"

/**
 * print_rev - print string
 *@s: string
 */

void print_rev(char *s)
{
	int m = 0;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	while (m != 0)
	{
		s--;
		m--;
		_putchar(*s);
	}
	_putchar('\n');

}
