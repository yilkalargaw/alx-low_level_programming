#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: integer value to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_new = malloc(sizeof(dlistint_t)), *tmp = *head;

	if (!node_new)
		return (NULL);

	node_new->n = n;
	node_new->next = NULL;

	if (!*head)
	{
		node_new->prev = NULL;
		*head = node_new;
		return (node_new);
	}

	for (; tmp->next; tmp = tmp->next)
		;

	tmp->next = node_new;
	node_new->prev = tmp;

	return (node_new);
}
