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
	listint_t *newn, *temp = *head;
	unsigned int i;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);
	newn->n = n;
	if (head == NULL)
		return (NULL);
	if (i != idx - 1 || temp == NULL)
		return (NULL);
	if (idx == 0)
	{
		if (*head == NULL)
		{
			newn->next = NULL;
			*head = newn;
		}
		else
		{
			newn->next = *head;
			*head = newn;
		}
		return (newn);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	newn->next = temp->next;
	temp->next = newn;

	return (newn);
}
