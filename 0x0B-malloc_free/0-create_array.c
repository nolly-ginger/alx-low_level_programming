#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an arrays of chars
 * initialize the chars with specific chars
 * @size: array of chars
 * @c: the specific char
 *
 * Return: 0 if size is zero
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	i = malloc(sizeof(char) * size);

	if (size == 0 || i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	return (i);
}
