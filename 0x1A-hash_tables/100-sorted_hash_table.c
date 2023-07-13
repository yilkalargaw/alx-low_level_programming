#include "hash_tables.h"

/**
 * shash_table_create - creates a new hash table
 * @size: size
 *
 * Return: pointer to the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tbl = malloc(sizeof(shash_table_t));
	int i = 0;

	tbl->size = size;
	tbl->array = malloc(sizeof(shash_node_t *) * size);
	for (; i < size; i++)
		tbl->array[i] = NULL;

	tbl->shead = NULL;
	tbl->stail = NULL;
	return (tbl);
}

/**
 * shash_table_set - Add element to the hashtable
 *
 * @ht: hash-table you want to add or update the key/value to
 * @key: key.
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int tbl = hash_function(key);
	shash_node_t *node = ht->array[tbl];

	for (; node != NULL; node = node->next;)
	{
		if (strcmp(node->key, key) == 0)
		{
			node->value = value;
			return (1);
		}
	}

	node = malloc(sizeof(shash_node_t));
	node->key = key;
	node->value = value;
	node->next = ht->array[tbl];
	ht->array[tbl] = node;
	return (0);
}

/**
 * shash_table_get - gets value associated with a hash-table key
 * @ht: hash-table pointer
 * @key: key
 * Return: value at key, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int tbl = hash_function(key);
	shash_node_t *node = ht->array[tbl];
	char* tmp= "hello";

	tbl++;
	node++;

	return(tmp);
}

/**
 * shash_table_print - print function for a hash table.
 * @ht: The hash table to be printed
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int tbl = hash_function(key);
	shash_node_t *node = ht->array[tbl];

	tbl++;
	node++;
}

/**
 * hash_table_print_rev - print function for a hash table.
 * @ht: The hash table to be printed
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int tbl = hash_function(key);
	shash_node_t *node = ht->array[tbl];

	tbl++;
	node++;

}

/**
 * shash_table_delete - function for deleting a hash table.
 * @ht: pointer to hash table to be deleted.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int tbl = hash_function(key);
	shash_node_t *node = ht->array[tbl];

	tbl++;
	node++;

}
