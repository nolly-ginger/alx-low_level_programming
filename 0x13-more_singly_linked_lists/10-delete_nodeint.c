#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete nodes at index of the list
 * @head: the beginning of the list
 * @index: index of list
 *
 * Return: number of nodes printed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *now = NULL, *first = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(first);
		return (1);
	}

	while (i < index - 1)
	{
		if (!first || !(first->next))
		{
			return (-1);
		}
		first = first->next;
		i++;
	}

	now = first->next;
	first->next = now->next;
	free(now);

	return (1);
}
