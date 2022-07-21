#include "main.h"

/**
 * flip_bits - bit counter
 * @n: number a
 * @m: number b
 * Return: bit count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = 0, i = 0;

	while (i != 64)
	{
		if ((n & 1) != (m & 1))
			bit++;
		n >>= 1;
		m >>= 1;
		i++;
	}
	return (bit);
}
