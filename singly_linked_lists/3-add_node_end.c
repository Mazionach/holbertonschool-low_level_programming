#include "lists.h"

/**
 * add_node_end - adds a node at the end of list
 * @head: the list
 * @str: the element
 * Return: the new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *cur = *head;

	if (!new)
		return (NULL);

	new->str = malloc(strlen(str));
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	else
	{
		strcpy(new->str, str);
	}
	new->len = strlen(str);
	new->next = NULL;

	if (cur)
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}
