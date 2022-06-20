#include "main.h"

/**
 * *_memcpy - to copy n parts betwen strings
 * @dest: string destino
 * @src: string from copy
 * @n: times to coppy
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
