#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: is the hash table you want to add or update
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;


	index = key_index((const unsigned char *)key, ht->size);


	ht->array[index] = malloc(sizeof(hash_node_t));
	if (!ht->array[index])
		return (0);

	ht->array[index]->key = strdup(key);
	ht->array[index]->value = strdup(value);


	return (1);
}
