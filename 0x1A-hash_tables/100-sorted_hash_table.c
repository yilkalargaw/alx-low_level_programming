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

	for (; node != NULL; node = node->next)
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
/* char *shash_table_get(const shash_table_t *ht, const char *key) */
/* { */
/* 	hash_node_t *node; */
/* 	unsigned long int index; */

/* 	index = key_index((unsigned const char *)key, ht->size); */
/* 	node = ht->array[index]; */
/* 	while (node != NULL) */
/* 	{ */
/* 		if (strcmp(node->key, key) == 0) */
/* 			return (node->value); */
/* 		node = node->next; */
/* 	} */

/* 	return (NULL); */
/* } */
