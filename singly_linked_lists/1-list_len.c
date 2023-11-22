#include "lists.h"

/**
 * list_len - counts number of elements in list
 * @h: the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int a = 0;

	for (; h; a++)
		;

	return (a);
}
