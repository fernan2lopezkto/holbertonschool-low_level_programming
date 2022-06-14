#include "main.h"

void _puts(char *str)
{
int i = 0;

        while (*str != '\0')
        {
                ++i;
                ++str;
		_putchar(*str);
        }

	_putchar('\n');
}
