#include "lists.h"
/**
 * add_node_end - add at the end
 * @head: pointer to first linked list
 * @str: string to be added
 *
 * Return: pointer to str added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = NULL;

	if (!head)
		return (NULL);

	if (*head)
		return (add_node_end(&(*head)->next, str));

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);


	tmp->str = strdup(str);
	tmp->len = (strlen(tmp->str));
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
