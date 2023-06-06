#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of the listint_t list
 * @head: the beginning of the list
 * @n: nummber of elements
 *
 * Return: number of nodes printed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));

	if (first == NULL)
	{
		return (NULL);
	}

	first->n = n;
	first->next = *head;
	*head = first;

	return (*head);
}
