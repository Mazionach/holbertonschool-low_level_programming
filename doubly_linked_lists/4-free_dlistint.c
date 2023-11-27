#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: the list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);
	free(head);
}
