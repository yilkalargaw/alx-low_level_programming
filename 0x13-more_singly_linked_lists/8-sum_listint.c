#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) of a listint_t
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data (n) or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
