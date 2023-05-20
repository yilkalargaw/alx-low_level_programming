#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at index in Doubly linked list
 * @h: head pointer
 * @idx: insertion index
 * @n: value to insert
 *
 * Return: new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_new = NULL, *temp = *h;
	int i = 0;

	if (!h)
		return (NULL);

	node_new = malloc(sizeof(dlistint_t));
	if (!node_new)
		return (NULL);

	node_new->n = n;

	if (idx == 0)
	{
		node_new->next = temp;
		node_new->prev = NULL;
		if (temp)
			temp->prev = node_new;
		*h = node_new;
		return (node_new);
	}

	for (; (unsigned int)i < idx - 1; temp = temp->next, i++)
	{
		if (!temp)
		{
			free(node_new);
			return (NULL);
		}
	}

	node_new->prev = temp;
	node_new->next = temp->next;
	temp->next ? temp->next->prev = node_new : NULL;
	temp->next = node_new;

	return (node_new);
}
