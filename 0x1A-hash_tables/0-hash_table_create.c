#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size
 *
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **h_array;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	h_array = malloc(sizeof(hash_node_t *) * size);
	if (h_array == NULL)
		return (NULL);

	for (; i < size; i++)
		h_array[i] = NULL;

	ht->size = size;
	ht->array = h_array;

	return (ht);
}
