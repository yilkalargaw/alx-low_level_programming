#include "lists.h"
/**
 * sum_dlistint - returns the sum all in in a doubly linked list.
 * @head: pointer to the head of the list.
 *
 * Return: sum or zero
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	for (; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
