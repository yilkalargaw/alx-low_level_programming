#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly-linked list
 * @h: ptr to head of dobuly-linked list
 *
 * Return: num of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	for (; h->next != NULL; h = h->next, i++)
		printf("%d\n", h->n);

	printf("%d\n", h->n);

	return (i + 1);
}
