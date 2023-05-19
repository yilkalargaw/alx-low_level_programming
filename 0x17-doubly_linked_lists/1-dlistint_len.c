#include "lists.h"

/**
 * dlistint_len - return no of elements in a doubly-linked lst
 * @h: ptr to head of dobuly-linked list
 *
 * Return: num of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	for (; h->next != NULL; i++)
		h = h->next;

	return (i + 1);
}
