#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer to head of dlist
 * @idx: index of the list where the new node should be added
 * @n: data
 *
 * Return:  address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *head_tmp;
	unsigned int i;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head_tmp = *h;
		i = 1;
		if (head_tmp)
		{
			while (head_tmp)
				head_tmp = head_tmp->prev;
			while (head_tmp)
			{
				if (i == idx)
				{
					if (head_tmp->next == NULL)
						new_node = add_dnodeint_end(h, n);
					else
					{
						new_node = malloc(sizeof(dlistint_t));
						if (new_node != NULL)
						{
							new_node->n = n;
							new_node->next = head_tmp->next;
							new_node->prev = head_tmp;
							head_tmp->next->prev = new_node;
							head_tmp->next = new_node;
						}
					}
					break;
				}
				head_tmp = head_tmp->next;
				i++;
			}
		}
	}
	return (new_node);
}
