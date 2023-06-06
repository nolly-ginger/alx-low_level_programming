#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linked_list - free the list
 * @head: the start of the list
 *
 * Return: freed llists
 */

size_t linked_list(const listint_t *head)
{
	const listint_t *i, *j;
	size_t num = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				num++;
				i = i->next;
				j = j->next;
			}

			i = i->next;
			while (i != j)
			{
				num++;
				i = i->next;
			}
			return (num);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Print the listint_t list liked
 * @head: the beginning of the list
 *
 * Return: the printed nodes numbers
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t ext, num = 0;

	ext = linked_list(head);

	if (ext == 0)
	{
		for (; head != NULL; ext++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (num = 0; num < ext; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (ext);
}
