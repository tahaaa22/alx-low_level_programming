#include "lists.h"

/**
 * add_node - func that adds a new node at the beginning
 * @head: pointer to the head
 * @str: string of the new node
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	if (head == NULL)
		return (NULL);
	struct list_s *a = malloc(sizeof(struct list_s));

	a->str = strdup(str);
	while (*str++)
		i++;
	a->len = i;
	a->next = *head;
	*head = a;
	return (a);
}
