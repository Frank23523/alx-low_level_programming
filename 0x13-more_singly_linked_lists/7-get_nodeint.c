#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of list
 * @index: index of the node, starting at 0
 *
 * Return: nth node, else NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth = head;
	unsigned int i = 0;

	while (nth != NULL)
	{
		if (i == index)
		{
			return (nth);
		}
		i++;
		nth = nth->next;
	}

	return (NULL);
}
