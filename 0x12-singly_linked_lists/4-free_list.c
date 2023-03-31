#include "lists.h"

/**
 * free_list - free a linked list
 * @head: head to linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
