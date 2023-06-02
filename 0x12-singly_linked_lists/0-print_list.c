#include "lists.h"
#include <stdio.h>

/**
 * print_list - Entry ppoint to print elements in list_t
 * @h: the pointer used to rint out the elements
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}

	return (num);
}
