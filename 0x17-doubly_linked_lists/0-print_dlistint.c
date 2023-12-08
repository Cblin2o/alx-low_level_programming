#include "lists.h"

/**
 * print_dlistint - print all element of a list
 * @h : pointer to the next node
 * Return: number of node in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if ( h == NULL)
		return x;
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
