#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatenate array
 * @s1: is the string one from main file
 * @s2:
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *pr;
	int size1, size2;

	size1 = strlen(s1);
	size2 = strlen(s2);

	pr = malloc((size1 + size2) * sizeof(char));

	if (pr == NULL)
		return (0);

	strcpy(pr, s1);
	strcpy(pr + size1, s2);

	return (pr);
}
