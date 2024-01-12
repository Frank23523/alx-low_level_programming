#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to head of dlist
 * @n: data
 *
 * Return: address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *head_tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	head_tmp = *head;

	if (head_tmp != NULL)
	{
		while (head_tmp->next)
			head_tmp = head_tmp->next;
		head_tmp->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = head_tmp;
	return (new_node);
}
