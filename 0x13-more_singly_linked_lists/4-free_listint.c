#include "lists.h"

/**
 * free_listint - function to free the list
 * @head: pointer to the struct
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head->n);
	free(head);
}
