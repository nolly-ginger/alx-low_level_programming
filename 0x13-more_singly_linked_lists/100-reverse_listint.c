#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Revense the elements in listint_t
 * @head: the beginning of thelist
 *
 * Return: the printed nodes of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL, *j = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = i;
	}
	*head = j;

	return (*head);
}
