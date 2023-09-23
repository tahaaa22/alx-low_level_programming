#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of double list
 * @h: pointer to the head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (c);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
