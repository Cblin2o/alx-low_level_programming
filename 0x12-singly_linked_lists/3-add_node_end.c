#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to head of list
 *@str: string added to the list
 *Return: NULL in case of failure or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *node;
	int to;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	node = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (to = 0; str[to];)
		to++;

	new->str = node;
	new->to = to;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
