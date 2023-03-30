#include "lists.h"

/**
 * list_len - calculate number of elements
 * @h: linked list pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	int count = 0;

	tmp = h;

	for (; tmp != NULL; count++)
		tmp = tmp->next;

	return (count);
}
