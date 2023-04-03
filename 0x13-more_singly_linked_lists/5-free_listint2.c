#include "lists.h"

/**
 * free_listint2 - Frees frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	for (; *head != NULL; *head = (*head)->next, free(current))
		current = *head;

	*head = NULL;
}
