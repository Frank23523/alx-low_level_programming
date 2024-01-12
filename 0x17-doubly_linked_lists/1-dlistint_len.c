#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head of doubly linked list
 *
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
