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
	unsigned int *i;

	i = (unsigned int *) malloc(sizeof(unsigned int) * b);

	if (i == NULL)
	{
		printf("98");
		return (0);
	}

	free(i);
	return (0);
}
