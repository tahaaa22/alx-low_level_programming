#include "lists.h"

/**
 * free_list - function to free up the linked list
 * @head: pointer to the start of the linked list
 */

void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head);
}
