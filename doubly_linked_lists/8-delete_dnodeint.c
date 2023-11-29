#include "lists.h"

/**
 * delete_dnodeint_at_index - delete element at index of list
 * @head: pointer to list
 * @index: index
 * Return: 1 if success, -1 if error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;

	if (!*head)
		return (-1);

	while (index && cur)
	{
		cur = cur->next;
		index--;
	}
	if (!index)
	{
		if (cur->prev)
			cur->prev->next = cur->next;
		else
			*head = cur->next;
		if (cur->next)
			cur->next->prev = cur->prev;
		free(cur);
		return (1);
	}
	return (-1);
}
