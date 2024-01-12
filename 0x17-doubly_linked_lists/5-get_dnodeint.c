#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of dlist
 * @index: index of the node, starting from 0
 *
 * Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
