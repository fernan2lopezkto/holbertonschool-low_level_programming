#include "main.h"


/**
 * rev_string - print string
 *@s: string
 */
void rev_string(char *s)
{
	int a = 0;
        int size= 0;
	char var;

        while (*s != '\0')
        {
                s++;
                size++;
        }
      while (a != size / 2)
        {
		var = *s - size;
		*s - size = *s;
		*s = var;
                s--;
		a++;
        }
}
