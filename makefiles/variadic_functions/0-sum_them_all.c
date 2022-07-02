#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum whit variadic arguments
 *@n: number of arguments
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0, valor;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list p;

		va_start(p, n);

		for (i = 0; i < n; i++)
		{
			valor = va_arg(p, int);
			s += valor;
		}

		va_end(p);
	}
	return (s);
}
