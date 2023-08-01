#include "lists.h"

/**
 * add_nodeint - function that add new node at the beginning
 * @head: pointer to pointer at the beginning
 * @n: value of node
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **temp = head;
	listint_t *newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);
	newn->n = n;
	if (*head == NULL)
		newn->next = NULL;
	else
	{
		temp = *head->next;
		*head = newn;
		newn->next = temp;
	}
	free(*temp);
	return (newn);
}
