#include "lists.h"

/**
 * dlistint_len - returns number of elements of list
 * @h: the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int r = 0;

	while (h)
	{
		h = h->next;
		r++;
	}
	return (r);
}
