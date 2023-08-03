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
	unsigned int i = 0, t;
	listint_t *temp = *head, *temp2 = *head;
	listint_t *newn = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	if (newn == NULL)
		return (NULL);
	newn->n = n;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}
	while (temp != NULL)
	{
		i = i + 1;
		temp = temp->next;
	}
	temp = *head;

	for (t = 0; t < i; t++)
	{
		if ((idx - 1) == t)
		{
			temp = temp2->next;
			temp2->next = newn;
			newn->next = temp;
		}
		temp2 = temp2->next;
	}
	return (newn);
}
