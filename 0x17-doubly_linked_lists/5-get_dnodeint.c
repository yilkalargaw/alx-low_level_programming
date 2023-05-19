#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a
 * doubly inkedlistint_t linked list.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node, starting from 0.
 *
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    unsigned int i = 0;

    for (; current != NULL && i < index; i++)
        current = current->next;

    return (i == index? current : NULL);
}
