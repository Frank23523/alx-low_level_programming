#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - list length of integers.
 * @h: head of list of integers
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
