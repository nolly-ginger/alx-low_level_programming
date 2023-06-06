#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - free the listint list
 * @head: the beginning of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head)
	{
		frees = head->next;
		free(head);
		head = frees;
	}
}
