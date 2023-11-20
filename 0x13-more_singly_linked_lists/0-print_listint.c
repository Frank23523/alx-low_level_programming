#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: head of list
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
