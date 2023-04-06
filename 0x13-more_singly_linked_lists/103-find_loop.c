#include "list.h"

/**
 * find_listint_loop - Finds the loop in linked list
 * @head: Pointer to the head of the list
 *
 * Return: The address of the node with loop, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			for (; slow != fast; slow = slow->next, fast = fast->next)
				;

			return (slow);
		}
	}

	return (NULL);
}
