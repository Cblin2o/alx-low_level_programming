#include "lists.h"

/**
 * dlistint_len - print the length of nodes in a list
 * @h: pointer to the head of a list
 * Return : length of a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (x);

	while (h != NULL)
	{
		h = h->next;
		x++;
	}

	return (x);
}
