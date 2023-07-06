#include "main.h"

/**
 * get_bit - gives bit value in index form
 * @n: bit number
 * @index: the index form
 *
 * Return: value of bit in index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
	{
		return (-1);
	}

	i = (n >> index) & 1;

	return (i);
}
