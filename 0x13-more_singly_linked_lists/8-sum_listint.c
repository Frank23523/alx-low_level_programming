#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint- sums of all the data (n) of a listint_t linked list
 * @head: head of list
 *
 * Return: sum of list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
