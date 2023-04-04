#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: Pointer to the head of the list
 * @index: Index of the node
 *
 * Return: Pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head != NULL && i < index; i++, head = head->next)
		;

	return ((head != NULL) ? head : NULL);
}
