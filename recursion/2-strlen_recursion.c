#include "main.h"
/**
 * _strlen_recursion - count longer string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
