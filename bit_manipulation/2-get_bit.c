#include "main.h"
#include <stddef.h>
/**
 * get_bit -returns the value of a bit
 * @n: number
 * @index: is the index
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= 20000)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
