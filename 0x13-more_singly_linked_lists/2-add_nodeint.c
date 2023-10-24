#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of the list
 * @head: head of the list
 * @n : node
 * Return: address of element or NULL if function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
