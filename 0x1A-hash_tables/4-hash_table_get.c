#include "hash_tables.h"

/**
 * hash_table_get - gets value associated with a hash-table key
 * @ht: hash-table pointer
 * @key: key
 * Return: value at key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node, **hash_array;
	unsigned long int hash_table_size, hash_index;

	if (ht == NULL || key == NULL)
		return (NULL);

	hash_table_size = ht->size;
	hash_array = ht->array;

	hash_index = key_index((unsigned char *)key, hash_table_size);
	current_node = hash_array[hash_index];

	for (; current_node != NULL; current_node = current_node->next)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
	}

	return (NULL);
}
