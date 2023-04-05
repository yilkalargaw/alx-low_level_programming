#include "lists.h"

/**
 * free_listint_safe - Frees listint_t linked
 * @h: Pointer to the head of the list
 *
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l_size = 0;
	listint_t *temp;

	for (; *h != NULL; temp = (*h)->next, free(*h), *h = temp)
	{
		l_size += 1;

		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	return (l_size);
}
