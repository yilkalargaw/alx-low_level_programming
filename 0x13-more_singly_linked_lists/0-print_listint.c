#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
