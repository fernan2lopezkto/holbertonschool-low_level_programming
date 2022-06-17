#include "main.h"


/**
 * *_strncpy - funtion for concaten strings
 *@dest: is where save the copy
 *@src: is the strin to add in @dest
 *@n: number of character to copy
 * Return: char string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
