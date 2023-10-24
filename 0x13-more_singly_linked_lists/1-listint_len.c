#include "lists.h"

/**
 * listint_len - print length of list
 * @h: head of list
 * Return : length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
