#include "lists.h"
/**
 *list_len - finds the number of element in a linked list
 *@h: pointer to list
 *Return : number of element
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
