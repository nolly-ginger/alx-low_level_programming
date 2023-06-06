#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Print the listint_t list liked
 * @head: the beginning of the list
 *
 * Return: the printed nodes numbers
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *link;
	size_t num = 0;

	if (head == NULL)
		exit(98);

	link = head;

	while (link != NULL)
	{
		printf("%d\n", link->n);
		num++;

		link = link->next;

		if (link == head)
		{
			printf("-> [%p] %d\n", (void *)link, link->n);
			exit(98);
		}
	}

	return (num);
}
