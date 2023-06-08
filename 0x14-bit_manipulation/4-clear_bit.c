#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set bitto 0 at given index
 * @n: the integer being evaluatded
 * @index: the index
 *
 * Return: the bit value 1 for success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
