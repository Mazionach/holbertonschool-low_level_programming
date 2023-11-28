#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts element at index of list
 * @h: pointer to list
 * @idx: index
 * @n: element
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h;

	if (!(*h || idx))
		return (add_dnodeint(h, n));

	if (!idx)
		return (add_dnodeint(h, n));

	while (idx && cur)
	{
		cur = cur->next;
		idx--;
	}
	if (!idx)
	{
		return (add_dnodeint(&(cur->prev->next), n));
	}
	return (NULL);
}
