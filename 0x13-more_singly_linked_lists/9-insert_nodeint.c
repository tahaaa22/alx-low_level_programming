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
	if (head == NULL)
		return (NULL);
	if (i != idx - 1 || temp == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	newn->n = n;
	newn->next = temp->next;
	temp->next = newn;

	return (newn);
}
