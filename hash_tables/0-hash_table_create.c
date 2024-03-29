#include "hash_tables.h"

/**
 * hash_table_create -  that creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	ht->array = array;
	ht->size = size;

	return (ht);
}
