#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenate array
 * @s1: is the string one from main file
 * @s2: i
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *pr;
	int size1, size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	pr = malloc((size1 + size2 + 1) * sizeof(char));
	if (pr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		pr[i] = s1[i];
	for (j = 0; j < size2; j++)
	{
		pr[i] = s2[j];
		i++;
	}
	pr[i + j] = '\0';
	return (pr);
}
