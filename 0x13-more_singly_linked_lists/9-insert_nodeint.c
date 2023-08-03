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
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	temp = *head;

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (i != idx - 1 || temp == NULL)
		return (NULL);
	newn = malloc(sizeof(*newn));

	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = temp->next;
	temp->next = newn;

	return (newn);
}
