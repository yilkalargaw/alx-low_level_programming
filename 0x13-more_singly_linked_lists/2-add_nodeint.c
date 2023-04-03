#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t
 * @head: Pointer to the head of the list
 * @n: Integer value to store in the new node
 *
 * Return: New element pointer, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)  /* check if malloc worked */
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}