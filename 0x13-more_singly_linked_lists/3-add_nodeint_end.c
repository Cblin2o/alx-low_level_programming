#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 * @head: the head of a list
 * @n: node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint i;

	if (i != NULL)
		i-> = n;
		i->next = NULL;
	else
		return (NULL);
	if (head != NULL)
		while (head->next != NULL)
			head = head->next;
		head->next = i;
	else
		head = i;
	return(i);
}
