#include "main.h"

/**
 * *_memset - asign constant byte n times
 *@s: pointer to start
 *@b: constant
 *@n: times to save the constant
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
