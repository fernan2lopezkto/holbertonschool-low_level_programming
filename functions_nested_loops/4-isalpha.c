#include "main.h"
/**
 * _isalpha - test alpha
 * @c: is te parameter of main.c
 * Return: void
 */
int _isalpha(int c)
{

	if (c > 97 && c < 122)
		return (1);

	if (c > 65 && c < 90)
		return (1);

	return (0);
}
