#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head and returns the head node’s data
 * @head: head of list
 *
 * Return: head node's data, else 0;
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
