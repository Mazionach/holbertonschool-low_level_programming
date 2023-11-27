#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int r = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		r++;
	}
	return (r);
}
