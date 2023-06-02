#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns number of elemets within a linked list_t
 * @h: pointer being used to locate and return elements
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;

		num++;
	}

	return (num);
}
