#include "main.h"

int _strlen(char *s);

/**
 **_strcat - funtion for concaten strings
 *@dest: is where save the copy
 *@src: is the strin to add in @dest
 *@n: number of character to copy
 * Return: char string
 */
char *_strncat(char *dest, char *src, int n)
{
	int tdest, tsrc, s = 0;

	tdest = _strlen(dest);
	tsrc = _strlen(src);

	if (tsrc < n)
		n = tsrc;
	while (s < n)
	{
		dest[tdest] = src[s];
		tdest++;
		s++;
	}
	return (dest);
}


/**
 * _strlen - funtion for concaten strings
 *@s: is string from main
 * Return: int
 */
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
