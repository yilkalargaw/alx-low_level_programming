#include "lists.h"
/**
 * free_listint - Frees a listint_t.
 *
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	for (; head != NULL; head = head->next, free(current))
		current = head;
}
