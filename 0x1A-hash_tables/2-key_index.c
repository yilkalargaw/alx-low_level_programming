#include "hash_tables.h"

/**
 * key_index - find index using djb2
 * @key: key
 * @size: size
 *
 * Return: key pointer
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
