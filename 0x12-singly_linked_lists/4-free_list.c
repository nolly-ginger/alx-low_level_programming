#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * free_list - free the list_t list
 * @head: the list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *i, *j;

	j = head;

	while (j != NULL)
	{
		i = j->next;
		free(j->str);
		free(j);
		j = i;
	}
}
