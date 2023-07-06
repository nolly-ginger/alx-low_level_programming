#include "main.h"

/**
 * flip_bits - number of bits needed to flip num
 * @n: the bit number
 * @m: numer of bits needed
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int k, extra = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		k = extra >> i;
		if (k & 1)
			j++;
	}
	return (j);
}
