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
	unsigned int i = 0;

	tbl->size = size;
	tbl->array = malloc(sizeof(shash_node_t *) * size);
	for (; i < size; i++)
		tbl->array[i] = NULL;

	tbl->shead = NULL;
	tbl->stail = NULL;
	return (tbl);
}
