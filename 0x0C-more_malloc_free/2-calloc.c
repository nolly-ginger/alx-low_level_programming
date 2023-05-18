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
	unsigned int *i;

	i = &nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (!nmemb)
		return (NULL);

	i = malloc(sizeof(int) * size);

	return (i);
}
