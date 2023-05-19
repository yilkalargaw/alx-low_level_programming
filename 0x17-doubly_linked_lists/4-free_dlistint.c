#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 * @head - pointer to start of list
 *
 * Return void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cpy;

	for (;head != NULL;head = head->next)
	{
		cpy = head;
		free(cpy);
	}
}
