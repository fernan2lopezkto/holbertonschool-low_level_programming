#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char i;
	char x;
	for (i = 0; i < 5; i++)
	{

	for (x = 'a'; x <= 'z'; x++)
	_putchar(x);
	_putchar('\n');
	}
}
