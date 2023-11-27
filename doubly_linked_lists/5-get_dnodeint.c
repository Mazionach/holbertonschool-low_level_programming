#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of list
 * @head: the list
 * @index: the index to look for
 * Return: pointer to the element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index && head)
	{
		head = head->next;
		index--;
	}
	return (head);
}
