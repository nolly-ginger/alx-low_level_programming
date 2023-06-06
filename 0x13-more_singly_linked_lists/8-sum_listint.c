#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum the data of the listint_t list
 * @head: the begonning of the lst
 *
 * Return: number of nodes printed
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
