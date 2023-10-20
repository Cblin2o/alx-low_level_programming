#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to head of list
 *@str: string
 * Return: returns the address to the new element or NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *node;
	int to;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	node = strdup(str);
	if (node == NULL)
	{
		free(new);
		return (NULL);
	}
	for (to = 0; str[to];)
		to++;

	new->str = node;
	new->to = to;
	new->next = *head;

	*head = new;

	return (new);

}
