#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - find the loop in the listint_t list
 * @head: the beginning of the list
 *
 * Return: the printed nodes of the list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *second = head;

	if (!head)
		return (NULL);

	while (first && second && second->next)
	{
		second = (second->next)->next;
		first = first->next;
		if (second == first)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}
	return (NULL);
}
