#include "main.h"


/**
 * _strcmp - string compare
 * @s1: ferst string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int p = 0;

	while (s1[p] - s2[p] == 0 && (s1[p] || s2[p] != '\0'))
	{
		p++;
	}
	return (s1[p] - s2[p]);
}
