#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
