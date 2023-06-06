#include "lists.h"

/**
 * listint_len - Return the list of elements within the listint list
 * @h: pointer to the next node of the list
 *
 * Return: the number  of nodes printed
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
