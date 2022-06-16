#include "main.h"

/**
 * puts_half - my functions
 * @str: my string from main file
 */
void puts_half(char *str)
{
	int n, size = 0;

	while (str[size] != '\0')
		size++;

	n = size / 2;

	while (n < size)
	{
		if (size % 2 != 0)
		{
			n++;
		}
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
