#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - free the listint_t list
 * @h: the beginning of the list
 *
 * Return: the printed number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	int i;
	size_t num = 0;
	listint_t *mid;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			mid = (*h)->next;
			free(*h);
			*h = mid;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;

	return (num);
}
