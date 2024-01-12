#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of dlist
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev)
			head = head->prev;
	}

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
