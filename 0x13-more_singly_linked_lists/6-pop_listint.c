#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - Delete head nodes and return head bode datas
 * @head: the beginning of the nodes
 *
 * Return: number of nodes printed or 0 for empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	del = (*head)->next;
	free(*head);
	*head = del;

	return (num);
}
