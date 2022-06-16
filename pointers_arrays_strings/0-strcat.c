#include "main.h"

int _strlen(char *s);

/**
 * *_strcat - funtion for concaten strings
 *@dest: is where save the copy
 *@src: is the strin to add in @dest
 * Return: char string
 */
char *_strcat(char *dest, char *src)
{
	int ldest, lsrc, size = 0;

	ldest = _strlen(dest);
	lsrc = _strlen(src);

	while (size < lsrc)
	{
	dest[ldest] = src[size];
	size++;
	ldest++;
	}
	return (dest);
}

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}


