#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to the head of the list
 * @idx: Index of the list where the new node
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (!head)
		return (NULL);

	if (idx && *head)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));

	if (idx == 0)
	{
		listint_t *new = malloc(sizeof(listint_t));

		if (!new)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
