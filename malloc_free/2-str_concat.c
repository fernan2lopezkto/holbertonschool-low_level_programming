#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int size1, size2, ran;


	if (s1 == NULL && s2 == NULL)
	{
		pr = malloc(1 * sizeof(char));
		if (pr == NULL)
			return (0);
		pr[0] = '\0';
		return (pr);
	}
	if (s1 == NULL)
	{
		size2 = strlen(s2);
		pr = malloc((size2 + 1) * sizeof(char));
		if (pr == NULL)
			return (0);
		for (ran = 0; ran <= size2; ran++)
			pr[ran] = s2[ran];
		return (pr);
	}
	if (s2 == NULL)
	{
		size1 = strlen(s1);
		pr = malloc((size1 + 1) * sizeof(char));
		if (pr == NULL)
			return (0);
		for (ran = 0; ran <= size1; ran++)
			pr[ran] = s1[ran];
		return (pr);
	}
	else
	{
		size1 = strlen(s1);
		size2 = strlen(s2);
		pr = malloc((size2 + size1 + 1) * sizeof(char));
		if (pr == NULL)
		{
			return (0);
		}
		strcpy(pr, s1);
		strcpy(pr + size1, s2);
	}
	return (pr);
}
