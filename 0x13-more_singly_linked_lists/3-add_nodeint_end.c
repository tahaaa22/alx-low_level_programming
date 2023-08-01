#include "lists.h"

/**
 * add_nodeint_end - function to add new node at the end
 * @head: pinter to the struct
 * @n: int to be added
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (newn == NULL)
		return (NULL);
	newn->n = n;

	if (*head == NULL)
	{
		*head = newn;
		newn->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->next = NULL;
	}
	return (newn);
}
