#include "hash_tables.h"

/**
 * hash_table_set - Add element to the hashtable
 *
 * @ht: hash-table you want to add or update the key/value to
 * @key:  key.
 * @value:  value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *tmp_key = malloc(strlen(key) + 1);
	char *tmp_value = malloc(strlen(value) + 1);
	hash_node_t *node;
	unsigned long int index;

	strcpy(tmp_key, key);
	strcpy(tmp_value, value);

	index = key_index((unsigned const char *)tmp_key, ht->size);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, tmp_key) == 0)
		{
			free(node->value);
			node->value = strdup(tmp_value);
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = tmp_key;
	node->value = strdup(tmp_value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
