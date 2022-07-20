#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to number
 * @index: is the index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(index) * 8;

	if (index > size)
		return (-1);

	size = 1 << index;

	*n = *n | size;

	return (1);
}
