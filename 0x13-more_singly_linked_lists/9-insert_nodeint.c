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
	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *current = *head;
	unsigned int i = 0;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
