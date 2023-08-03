#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a position
 * @head: pointer to the struct
 * @idx: index to the node
 * @n: value of the new node
 * Return: the new node after addition
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}
	temp = *head;

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || i != idx - 1)
	{
		free(newn);
		return (NULL);
	}

	newn->next = temp->next;
	temp->next = newn;

	return (newn);
}
