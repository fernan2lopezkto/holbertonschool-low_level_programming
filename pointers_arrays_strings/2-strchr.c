#include "main.h"

/**
 * *_strchr - detect character
 * @s: pointer to start
 * @c: character to found
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (i != (c || '\0'))
		i++;
	i++;
	return (s + i);
}
