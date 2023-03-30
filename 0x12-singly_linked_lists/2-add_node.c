#include "lists.h"

/**
 * add_node - adds new
 * @head: 2nd degree pointer to head
 * @str: str
 *
 * Return: address of new element || NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *tmp = strdup(str);
	list_t *newhead = NULL;
	int x = 0;

	if (!tmp)
		return (NULL);

	for (; tmp[x] != '\0'; x++)
		;
	newhead = malloc(sizeof(list_t));

	if (newhead == NULL)
	{
		free(tmp);
		return (NULL);
	}

	newhead->str = tmp;
	newhead->len = x;
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
