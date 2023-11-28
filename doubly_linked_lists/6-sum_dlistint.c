#include "lists.h"

/**
 * sum_dlistint - sums elements of list
 * @head: list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int r = 0;

	for (; head; head = head->next)
		r += head->n;
	return (r);
}
