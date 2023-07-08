#include "hash_tables.h"

/**
 * hash_table_delete - function for deleting a hash table.
 * @ht: pointer to hash table to be deleted.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **a, *tmp, *del;
	char *keyp, *valp;
	unsigned long int s, x = 0;

	if (ht == NULL)
		return;

	a = ht->array;
	s = ht->size;

	for (; x < s; x++)
	{
		tmp = a[x];
		for (; tmp != NULL;)
		{
			keyp = tmp->key;
			valp = tmp->value;
			del = tmp->next;
			free(keyp);
			free(valp);
			free(tmp);
			tmp = del;
		}
	}
	free(a);
	free(ht);
}
