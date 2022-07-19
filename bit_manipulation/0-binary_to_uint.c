#include "main.h"
#include <stddef.h>

unsigned int pow_2(unsigned int position);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0, position = 0;
	int stop = 0;
	
	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (b[stop] != '\0')
			stop++;

		while (stop >= 0)
		{
			if (b[stop] != '0' && b[stop] != '1')
			{
				return (0);
			}
			if (b[stop] == 49)
				bin = bin + pow_2(position)
					;
			position++;
			stop--;

		}
			
	}

	return (bin);
}

unsigned int pow_2(unsigned int position)
{
	unsigned int i, pow = 2;

	if (position == 0)
		return (1);

	if (position == 1)
		return (2);

	for (i = 1; i < position; i++)
		pow = pow * 2;

	return (pow);
}
