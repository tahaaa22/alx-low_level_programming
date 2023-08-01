#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * @head: pointer to the struct
 * Return: int of the head
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = *head;

	if (head == NULL)
		return (0);
	i = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (i);
}
