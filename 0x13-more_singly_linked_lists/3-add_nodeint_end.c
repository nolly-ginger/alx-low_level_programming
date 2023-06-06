#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint_end - Add new node at the end of the listint_t list
 * @head: the beginning of the list
 * @n: number of elemets
 *
 * Return: the nuber of nodes printed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *end2;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;
	end2 = *head;

	if (*head == NULL)
		*head = end;
	else
	{
		while (end2->next != NULL)
		{
			end2 = end2->next;
		}
		end2->next = end;
	}

	return (*head);
}
