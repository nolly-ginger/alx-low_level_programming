#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array
 * @nmemb: the array
 * @size: size in bytes
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(sizeof(char) * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;

	return (c);
}
