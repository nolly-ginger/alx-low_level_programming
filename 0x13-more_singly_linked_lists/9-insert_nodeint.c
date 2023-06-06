#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - include new node at a specific location
 * @head: the neginning of the list
 * @idx: the index of the list
 * @n: integer
 *
 * Return: the number of nodes printed out
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *posi = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && posi != NULL; i++)
		{
			posi = posi->next;
		}
	}

	if (posi == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = posi->next;
		posi->next = new;
	}

	return (new);
}
