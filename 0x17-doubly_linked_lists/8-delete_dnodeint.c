#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: pointer to a pointer to head of dlist
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1 = *head, *head2;
	unsigned int i = 0;

	if (head1 == NULL)
		while (head1->prev)
			head1 = head1->prev;

	while (head1)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = head1->next;
				if (*head)
				{
					(*head)->prev = NULL;
				}
			}
			else
			{
				head2->next = head1->next;
				if (head1->next)
				{
					head1->next->prev = head2;
				}
			}
			free(head1);
			return (i);
		}
		head2 = head1;
		head1 = head1->next;
		i++;
	}
	return (-1);
}
