#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free the listint_t list
 * @head: he beginning of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (head  == NULL)
		return;

	while (*head)
	{
		frees = (*head)->next;
		free(*head);
		*head = frees;
	}
	*head = NULL;
}
