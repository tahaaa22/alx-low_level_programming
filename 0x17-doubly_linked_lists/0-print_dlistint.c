#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of double list
 * @h: pointer to the head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int c = 0;

	temp = h;

	if (h == NULL)
		return (c);
	while (temp != NULL)
	{
		printf("%d\n", h->n);
		temp = temp->next;
		c++;
	}
	return (c);
}
