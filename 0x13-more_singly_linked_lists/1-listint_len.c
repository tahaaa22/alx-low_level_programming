#include "lists.h"

/**
 * listint_len - function to return number of elements
 * @h: pointer to the struct
 * Return: return num
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
