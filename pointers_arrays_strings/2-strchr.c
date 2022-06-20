#include "main.h"

/**
 * *_strchr - detect character
 * @s: pointer to start
 * @c: character to found
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
