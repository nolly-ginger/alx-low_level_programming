#include "main.h"

/**
 * set_bit - set bit to 1 at given value
 * @n: the number bit
 * @index: the given value to be set to 1
 *
 * Return: The index value of the bit number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
