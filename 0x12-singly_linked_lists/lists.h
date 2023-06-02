#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - The singly linked list
 * @str: String being used for evaluation
 * @len: the length of the string str
 * @next: pointer for the next node
 *
 * Description: The structure for singly linked node structures
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
void sentence(void);
size_t list_len(const list_t *h);

#endif
