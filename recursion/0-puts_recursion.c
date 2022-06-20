#include "main.h"
/**
 * _puts_recursion - print whit recursion
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
	}
	_puts_recursion(s);
}
