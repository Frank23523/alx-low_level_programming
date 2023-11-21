#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 *
 * Return: number of nodes in the list, else 98
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nth = head;
	size_t i;

	for (i = 0; head != NULL; i++)
	{
		printf("[%p] %d\n", (void *)nth, nth->n);

		if (nth <= nth->next)
		{
			printf("-> [%p] %d\n", (void *)nth->next, nth->next->n);
		}
		nth = nth->next;
	}
	return (i);
}
