#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position
 * @head: Pointer to the head of the list
 * @idx: Index of the node that should be deleted
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *prev_node = NULL, *crnt_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	crnt_node = *head;

	if (idx == 0)
	{
		*head = (*head)->next;
		free(crnt_node);
		return (1);
	}

	for (; crnt_node != NULL && i < idx; i++, crnt_node = crnt_node->next)
		prev_node = crnt_node;

	if (crnt_node == NULL)
		return (-1);

	prev_node->next = crnt_node->next;
	free(crnt_node);

	return (1);
}
