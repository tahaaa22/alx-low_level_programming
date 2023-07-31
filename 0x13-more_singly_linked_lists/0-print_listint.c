#include "lists.h"


/**
 * print_listint - function to print the list of elements
 * @h: pointer to struct
 * Return: return size of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	_puchar(h->n);
	return (1 + print_listint(h->next));
}
