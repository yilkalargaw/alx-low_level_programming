#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size
 *
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	hash_node_t **hash_array;
	unsigned long int i = 0;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hash_array = malloc(sizeof(hash_node_t *) * size);
	if (hash_array == NULL)
		return (NULL);

	for (; i < size; i++)
		hash_array[i] = NULL;

	hasht->size = size;
	hasht->array = hash_array;

	return (hasht);
}
