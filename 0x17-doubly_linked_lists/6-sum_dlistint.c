#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: pointer to head of dlist
 *
 * Return: sum of all data, if the list is empty, return 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while(head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
