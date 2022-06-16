#include "main.h"


/**
 * rev_string - print string
 *@s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int size = 0;
	char var;

	while (s[size] != '\0')
	{
		size++;
	}
	while (i < size)
	{
		size--;
		var = s[size];
		s[size] = s[i];
		s[i] = var;
		i++;
	}
}
