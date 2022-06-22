#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - create the array whit espeific size initialiced whit c
 * @str: is the string from main file
 * Return: char
 */
char *_strdup(char *str)
{
	char *pr;
	int ran, size;

	size = strlen(str);

	if (size == 0)/*detect a error*/
		return (NULL);

	pr = malloc(size * sizeof(char));/*make array*/

	if (pr == NULL)
		return (NULL);

	for (ran = 0; ran < size; ran++)/*copying the array*/
		pr[ran] = str[ran];
	return (pr);/*return inicial pointer*/
}
