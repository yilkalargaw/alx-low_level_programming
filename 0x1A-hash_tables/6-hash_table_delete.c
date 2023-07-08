#include "hash_tables.h"

/**
 * hash_table_delete - function for deleting a hash table.
 * @ht: pointer to hash table to be deleted.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht) {
	hash_node_t *current_node;
	hash_node_t *next_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		{
			current_node = ht->array[i];
			for (; current_node != NULL; current_node = next_node)
				{
					next_node = current_node->next;
					free(current_node->key);
					free(current_node->value);
					free(current_node);
				}
		}

	free(ht->array);
	free(ht);
}
