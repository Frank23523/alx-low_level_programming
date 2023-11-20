#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: head of list
 *
 * Return: pointer to first node of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL, *b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;
	return (*head);
}
