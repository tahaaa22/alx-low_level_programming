#include "lists.h"

/**
 * add_node_end - add new nodes at the end
 * @head: pointer to the begin
 * @str: string to add
 * Return: return the adress of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	ist_t *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (*str++)
		i++;
	while (!*head)
		*head = *head->next;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
