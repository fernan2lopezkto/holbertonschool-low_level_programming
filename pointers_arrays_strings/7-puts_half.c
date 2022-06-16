#include "main.h"

/**
 * puts_half - my functions
 * @str: my string from main file
 */
void puts_half(char *str)
{
	int n, size = 0;

	while (str[size] != '\0')/*this is for calculate string longer*/
		size++;

	n = size / 2;/*in this variable save the midle of string*/

	if (size % 2 != 0)/*here detect a impar strings*/
	{
		n++;
	}
	while (n < size)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
