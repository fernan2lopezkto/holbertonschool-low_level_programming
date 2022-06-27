#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenate two strings
 * @s1: str 1 string
 * @s2: str 2 string
 * @n: long of char to coppy of str2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pr;
	unsigned int size1,  size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	if (n > size2)
		n = size2;

	pr = malloc((size1 + size2 + 1) * sizeof(char));
	if (pr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		pr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		pr[i] = s2[j];
		i++;
	}
	pr[i + 1] = '\0';
	return (pr);
}
