#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - function
 *@sep: string to print
 *@n: number of arguments
 *Return: void
 */
void print_numbers(const char *sep, const unsigned int n, ...)
{
	unsigned int i, valor;
	va_list p;

	if (sep == NULL)
		sep = "";

	if (n == 0)
	{
		va_start(p, n);

		for (i = 0; i < n - 1; i++)
		{
			valor = va_arg(p, int);
			printf("%d%s", valor, sep);
		}
		valor = va_arg(p, int);
		printf("%d\n", valor);

		va_end(p);
	}
	else
		printf("\n",);

		

}


