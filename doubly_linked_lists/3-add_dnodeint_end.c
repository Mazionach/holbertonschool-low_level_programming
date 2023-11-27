#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of list
 * @head: pointer to list
 * @n: element
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *cur = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (cur)
	{
		while (cur->next)
			cur = cur->next;
		cur->next = new;
		new->prev = cur;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
