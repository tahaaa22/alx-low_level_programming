#include "main.h"

/**
 * print_list - print each number of nodes
 *@h: pointer to the struct list
 *Return: return number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
