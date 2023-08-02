#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the struct
 * @index: index of the node
 * Return: node with needed index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0, n;
	listint_t *temp = head;

	while (temp != NULL)
	{
		i = i + 1;
		temp = temp->next;
	}
	for (n = 0; n < i; n++)
	{
		if (n == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
