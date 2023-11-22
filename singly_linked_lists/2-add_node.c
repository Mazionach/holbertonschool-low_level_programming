#include "lists.h"

/**
 * add_node - adds a node to a list
 * @head: the list
 * @str: the element
 * Return: the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	if (*head)
	{
		new->next = *head;
		head = &new;
	}
	else
	{
		new->next = NULL;
	}
	return (new);
}
