#include "lists.h"
#include <stdlib.h>

/**
 * list_len - lists length of linked list_t list
 * @h: head
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
