#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create -  that creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(void *) * size);
	if (!ht)
		return (NULL);

	return (ht);
}
