#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: pointer to the struct
 * Return: sum of n in the list
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
