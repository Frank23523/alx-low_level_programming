#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of list
 * @str: new string that is added to list
 *
 * Return: new node created, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *new_node, *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (new_node->str[l] != '\0')
		l++;

	new_node->len = l;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
