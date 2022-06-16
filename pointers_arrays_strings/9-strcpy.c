# include "main.h"

/**
 * *_strcpy - is a pointer functions?
 * @dest: destino del coppy
 * @src: from we can coppy
 * Return: char poiter
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i++
	dest[i] = src[i];
	return (dest);
}
