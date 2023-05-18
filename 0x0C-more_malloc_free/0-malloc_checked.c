#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory
 * @b: the memory we will be assigning to
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
