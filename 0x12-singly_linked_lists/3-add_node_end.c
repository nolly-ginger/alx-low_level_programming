#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Add new node at end of the list_t
 * @head: pointer of list_t to head pointer
 * @str: string being evaluated
 *
 * Return: pointer with new node at the end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old = *head;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (old->next)
		old = old->next;

	old->next = new;

	return (new);
}
