#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: the list's first element
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int a = 0;

	while (h)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nul)");
		a++;
		h = h->next;
	}
	return (a);
}
