#include "lists.h"

/**
 * list_len - trturns the number of he elements
 * @h: pointer to the list struct
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return(0);
	return (1 + list_len(h->next));
}
