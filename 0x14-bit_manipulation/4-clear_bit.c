#include "main.h"

/**
 * clear_bit - set bit value to 0 at  given index
 * @n: the bit number
 * @index: index value
 *
 * Return: the index value of bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
