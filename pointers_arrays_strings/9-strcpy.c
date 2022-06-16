# include "main.h"

/**
 * *_strcpy - is a pointer functions?
 * @dest: destino del coppy
 * @src: from we can coppy
 * Return: char poiter
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i++;
	dest[i] = src[i];
	return (dest);
}
