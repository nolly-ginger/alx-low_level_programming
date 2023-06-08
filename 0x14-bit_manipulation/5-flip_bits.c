#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns number of bits needed to turn
 * and get another number
 * @n: integer being evaluated
 * @m: integer 2 being evaluated
 *
 * Return: bit needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int now, needed = n ^ m;

	for (i = 63; i >= 0; i++)
	{
		now = needed >> i;
		if (now & 1)
		{
			j++;
		}
	}
	return (j);
}
