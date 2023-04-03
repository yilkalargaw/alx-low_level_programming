#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t
 * @head: Pointer to the head of the list
 * @n: Integer value to store in the new node
 *
 * Return: New element pointer, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) {
		*head = new_node;
		return (new_node);
	}

	for (; last->next != NULL; last = last->next)
		;

	last->next = new_node;

	return (new_node);
}
