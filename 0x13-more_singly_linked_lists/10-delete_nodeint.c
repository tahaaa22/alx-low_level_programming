#include "lists.h"

/**
 * delete_nodeint_at_index - function that node that deletes node at index
 * @head: pointer to the struct
 * @index: index to the node
 * Return: return the value of the node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2 = *head;
	unsigned int i = 0, n = 0;
	int t = 0;

	if (*head == NULL)
		return (-1);
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	temp = *head;

	while (temp2 != NULL)
	{
		if (index == 0)
		{
			(*head) = (*head)->next;
			free(temp);
			return (temp2->n);
		}
		if (n == index - 1)
		{
			temp = temp2->next;
			temp2->next = temp->next;
			t = temp->n;
			free(temp);
		}
		temp2 = temp2->next;
		n++;
	}
	if (t == 0)
		return (-1);
	else
		return (t);
}
