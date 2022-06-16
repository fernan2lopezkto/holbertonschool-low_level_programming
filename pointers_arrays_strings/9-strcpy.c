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
	int size = 0;

	while (src[size] != '\0')/*this is for calculate string longer*/
		size++;

	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
