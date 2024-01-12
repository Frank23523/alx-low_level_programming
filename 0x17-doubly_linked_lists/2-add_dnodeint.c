#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to head of dlinked list
 * @n: data
 *
 * Return:  address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *head_tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	head_tmp = *head;

	if (head_tmp != NULL)
	{
		while (head_tmp->prev)
			head_tmp = head_tmp->prev;
	}

	new_node->next = head_tmp;

	if (head_tmp != NULL)
		head_tmp->prev = new_node;

	*head = new_node;
	return (new_node);
}
