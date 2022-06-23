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


	if (str == NULL)
		return (NULL);

	size = strlen(str);

	pr = malloc((size + 1) * sizeof(char));/*make array*/

	if (pr == NULL)
		return (NULL);

	for (ran = 0; ran <= size; ran++)/*copying the array*/
		pr[ran] = str[ran];

	return (pr);/*return inicial pointer*/
}
