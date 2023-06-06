#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct listint_s - Entry point of the evaluated lists
 * @n: integers
 * @next: pointer to the next node of the list
 *
 * Description: structure of singly linked nodes of the lists being evaluated
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif