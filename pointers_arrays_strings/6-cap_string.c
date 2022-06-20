#include "main.h"

/*char toupper(char *);*/

/**
 * *cap_string - pasar primer letra de palabras a mayuscula
 * @s: is the string prom main file
 * Return: char
 */
char *cap_string(char *s)
{
	int back = 0;

     	if (*s >= 97 && *s < 122)
       {
                *s = *s - 32;
       }
	while (*s != '\0')
	{
		s++;
		back++;
		if (s == ((*s >= 97 && *s < 122) && s[-1] == (',' || ';' || '.' || '\t' || '\n' || '!' || '?' || '"' || '(' || ')' || '{' || '}'))
		{
				*s = *s - 32;
		}
	}
	return (s - back);
}
