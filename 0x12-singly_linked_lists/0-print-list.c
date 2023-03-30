#include "lists.h"

/**
 * print_list - print items in singly linked list
 * @h: the list to print
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		return (print_list(h->next) + 1);
	}

	return (0);
}
