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

	if (*head)
	{
		new->next = *head;
	}
	else
	{
		new->next = NULL;
	}
	*head = new;
	return (new);
}
