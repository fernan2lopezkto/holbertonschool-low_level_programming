#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a int
 * @index:  number of bites that I move.
 * Return: 1 if is success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = (sizeof(n) * 8);

	if (size < index)
		return (-1);

	size = 1 << index;

	*n = *n & ~size;
	return (1);
}
