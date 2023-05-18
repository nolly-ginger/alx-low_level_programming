#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocate a memory block
 * @ptr: pointer of memory
 * @old_size: size in bytes for ptr
 * @new_size: new size in byte for ptr
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
