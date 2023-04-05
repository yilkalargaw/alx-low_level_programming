#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_prev = NULL, *node_nxt = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (; *head != NULL;  node_prev = *head, *head = node_nxt)
	{
		node_nxt = (*head)->next;
		(*head)->next = node_prev;
	}

	*head = node_prev;

	return (*head);
}
