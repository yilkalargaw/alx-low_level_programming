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
	listint_t *current_node = NULL, *new_node = NULL;
	unsigned int i = 0;

	 if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)  /* check if malloc worked */
		return (NULL);

	new_node->n = n;

	idx == 0 ? (new_node->next = *head, *head = new_node) : 0;

	current_node = *head;
	for (; current_node != NULL && i < idx - 1; i++)
		current_node = current_node->next;

	current_node == NULL ? (free(new_node), new_node = NULL) : 0;

	current_node != NULL ? (new_node->next = current_node->next,
							current_node->next = new_node) : 0;

	return (new_node);
}
