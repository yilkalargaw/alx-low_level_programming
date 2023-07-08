#include "hash_tables.h"

/**
 * hash_table_print - print function for a hash table.
 * @ht: The hash table to be printed
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node, **hash_array;
	unsigned long int hash_table_size, i = 0;
	int first = 1;

	if (ht == NULL)
		return;

	hash_table_size = ht->size;

	hash_array = ht->array;

	printf("{");
	for (; i < hash_table_size; i++)
	{
		current_node = hash_array[i];
		for (; current_node != NULL; current_node = current_node->next)
		{
			if (first)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				first = 0;
			} else
				printf(", '%s': '%s'", current_node->key, current_node->value);
		}
	}
	printf("}\n");
}
