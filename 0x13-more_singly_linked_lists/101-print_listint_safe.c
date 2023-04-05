#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t
 * @head: Pointer to the head of the list
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t l_size = 0;

	for (; head != NULL; l_size++)
	{
		current = head;
		head = head->next;

		printf("[%p] %d\n", (void *)current, current->n);
		if (current <= head)
			break;
	}
	return (l_size);
}
