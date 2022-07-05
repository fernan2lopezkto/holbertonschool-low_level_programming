#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_all - function
 *@format: string format
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list p;

	va_start(p, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(p, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(p, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(p, double));
					break;
				case 's':
					str = va_arg(p, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(p);
}
