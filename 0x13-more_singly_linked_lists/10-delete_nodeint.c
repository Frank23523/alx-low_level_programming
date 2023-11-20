#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: head of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nth, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	nth = *head;

	while (i < index - 1 && nth != NULL)
	{
		nth = nth->next;
		i++;
	}

	if (nth == NULL || nth->next == NULL)
	{
		return (-1);
	}

	temp = nth->next;
	nth->next = temp->next;
	free(temp);

	return (1);
}
