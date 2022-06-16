#include "main.h"
/**
 * puts2 - is the principal function
 * @str: is the string fron main function.
 */

void puts2(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		if (size % 2 == 0)
		{
			_putchar(str[size]);
		}
		size++;
/**
 * incremente de a uno para evitar saltear el caracter nulo
 */
	}
}

