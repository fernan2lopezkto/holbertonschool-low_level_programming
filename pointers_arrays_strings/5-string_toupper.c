#include "main.h"

/**
 * *string_toupper - convert the low to uppercase
 * @s: pointer positions
 * Return: char
 */
char *string_toupper(char *s)
{
	int back = 0;

	while (*s != '\0')
	{
		if (*s >= 97 && *s < 122)/*segment lowercase*/
		{
			*s = *s - 32;
		}
		s++;
		back++;/*to know how much back*/
	}

	return (s - back);/*move pointer to start*/
}
