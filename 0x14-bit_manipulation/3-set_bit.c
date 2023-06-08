#include "main.h"
#include <stdio.h>

/**
 * set_bit - set value of bit to one in its index
 * @n: integer being used for evaluation
 * @index: the index
 *
 * Return: 1 if success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
