#include "lists.h"

/**
 * add_nodeint - function that add new node at the beginning
 * @head: pointer to pointer at the beginning
 * @n: value of node
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);
	newn->n = n;
	if (*head == NULL)
		newn->next = NULL;
	else
	{
		newn->next = *head->next;
		*head = newn;
	}
	return (newn);
}
