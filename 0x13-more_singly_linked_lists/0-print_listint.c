#include "lists.h"

/**
 * print_listint - prints all element
 * @h : parameter
 * Return : always 0.
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
