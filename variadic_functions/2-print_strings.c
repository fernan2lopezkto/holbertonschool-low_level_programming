#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - function
 *@sep: string to print
 *@n: number of arguments
 *Return: void
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	unsigned int i;
	char *v;
	va_list p;

	if (sep == NULL)
		sep = "";

	if (n != 0)
	{
		va_start(p, n);

		for (i = 0; i < n - 1; i++)
		{
			v = va_arg(p, char *);
			if (v == NULL)
				printf("(nil)");
			else
				printf("%s%s", v, sep);
		}
		v = va_arg(p, char *);
		printf("%s\n", v);

		va_end(p);
	}
	else
	{
		printf("\n");
	}
}


