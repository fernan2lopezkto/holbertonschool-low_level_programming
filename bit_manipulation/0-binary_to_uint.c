#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bit = 0, position;

	if (!b)
		return (0);

	for (position = 0; b[position]; position++)
	{
		switch (b[position])
		{
			case '0':
				bit = bit << 1;
				break;
			case '1':
				bit = bit << 1;
				bit = bit + 1;
				break;
			default:
				return (0);
		}
	}
	return (bit);
}
