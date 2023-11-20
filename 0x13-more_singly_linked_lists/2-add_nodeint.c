#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of list
 * @n: length of list
 *
 * Return: address of new element, else NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	int l = 0;
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (l < n)
	{
		l++;
	}

	new_node->n = l;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
