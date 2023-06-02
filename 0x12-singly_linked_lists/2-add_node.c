#include "lists.h"
#include <string.h>

/**
 * *add_node - Add new node at the beginning of a list
 * @head: pointer evaluationg the list
 * @str: the string being evaluated to be added in beginning
 *
 * Return: address of new node else  NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;
	char *sent;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	sent = strdup(str);

	if (sent == NULL)
	{
		free(new);
		return (NULL);
	}

	length = 0;
	while (str[length])
		length++;

	new->len = length;
	new->str = sent;
	new->next = *head;
	*head = new;

	return (new);
}
