#include "hash_tables.h"

/**
 * hash_djb2 - implements
 * @str: pointer
 *
 * Return: head to hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int head;
	int i;


	for (head = 5381; (i = *str++);)
		head = ((head << 5) + head) + i;

	return (head);
}
