#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t
 * @head: Pointer to the head of the list
 *
 * Return: The data of the deleted node, or 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	n = (!head || !*head) ? 0 : 1;

	if (n == 1)
	{
		n = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (n);
}
