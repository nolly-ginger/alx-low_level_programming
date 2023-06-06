#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements if listint_t
 * @h: the string being used to evaluate the lists
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (!h)
	{
		printf("%d", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
