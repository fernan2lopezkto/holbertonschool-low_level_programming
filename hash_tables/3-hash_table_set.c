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
	hash_node_t *new_list_node = NULL;


	if (!ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_list_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_list_node == NULL)
	{
		return (0);
	}
	new_list_node->key = strdup((char *)key);
	new_list_node->value = strdup((char *)value);

	if (ht->array[index] == NULL || (strcmp(ht->array[index]->key, key) == 0))
	{
		if (ht->array[index])
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
		}
		ht->array[index] = new_list_node;
	}
	else
	{
		new_list_node->next = ht->array[index];
		ht->array[index] = new_list_node;
	}

	return (1);
}
